
int t = 4 ;//taster 1
#include <Servo.h>//importiere servobibliothek
int t2 = 13;//taster2
Servo servo;
int state = 0;
int ts = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode( t, INPUT );
  pinMode(t2,INPUT);
  servo.attach(8);
  servo.write(0);
  
 
}

void loop() {
  // put your main code here, to run repeatedly:
  ts = digitalRead(t);
  if (digitalRead(t2)== HIGH and  ts == HIGH ){
    
    
    servo.write(180);
    Serial.print("3");
    
  }
    
    
    // code für den motor odr eigene funktion
  else{
    servo.write(0);
    
  }
  digitalWrite( b1, LOW);
  digitalWrite (b ,LOW); 
}
