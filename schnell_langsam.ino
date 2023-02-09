int t = 12;
int t3 = 13;
int b = 9;
bool schalte =false; 
int t2 = 4 ;
int b1 = 10;
int pos = 0;
#include <Servo.h>
Servo servo;
int state = 0;
int ts = 0;
bool hello = false;
void setup() {
  // put your setup code here, to run once:
 
 pinMode(t,INPUT);
 pinMode(t2,INPUT);
 pinMode(t3,INPUT);
 servo.attach(8);
 servo.write(0);
 pinMode(b,OUTPUT);
 pinMode(b1,OUTPUT);
}
void motorl(){
  for(pos; pos<= 180;pos += 1){
     
    if (digitalRead(t3) == HIGH ){
       schalte = false;
       break;
    }
    if (digitalRead(t2)== HIGH   ){
      hello =true;
      delay(100);
      break;
    }
    servo.write(pos);
    delay(50);
  }
  for(pos ; pos>= 0;pos -= 1){
    if (digitalRead(t3) == HIGH ){
       schalte = false;
       break;
    }
    if (digitalRead(t2)== HIGH   ){
      hello =true;
      delay(100);
      break;
    }
    servo.write(pos);
    delay(50);
  }
  
}
void motors(){
  for(pos ; pos<= 180;pos += 1){
    if (digitalRead(t3) == HIGH ){
       schalte = false;
       break;
    }
    servo.write(pos);
    delay(10);
    if (digitalRead(t)== HIGH   ){//gegenfallstas1
      hello =false;
      delay(100);
      break;
    }
  }
  for(pos ; pos>= 0;pos -= 1){
    if (digitalRead(t3) == HIGH ){
       schalte = false;
       break;
    }
    servo.write(pos);
    delay(10);
    if (digitalRead(t)== HIGH   ){
      
      delay(100);
      break;
    }
  }
}
void loop() {
  if (schalte == false){
    digitalWrite(b,LOW);
    digitalWrite(b1,LOW);
  }
  if (digitalRead(t) == HIGH ){
    schalte = true;
    
  }
  if (digitalRead(t2) == HIGH ){
    schalte = true;
    
  }
  if (hello == true and schalte == true){
    digitalWrite(b,HIGH);
    digitalWrite(b1,LOW);
    motors();
  }
  if (hello == false and  schalte == true){
    digitalWrite(b,LOW);
    digitalWrite(b1,HIGH);
    motorl();
  }
}
  // put your main code here, to run repeatedly:
