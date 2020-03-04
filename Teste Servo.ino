// Name: Jeferson S. Pazze
// E-mail: jeff.pazze@gmail.com
// Linkedin: https://www.linkedin.com/in/jeferson-souza-pazze-53806469/

#include <Servo.h> 

Servo myservo;

void setup() 
{ 
  myservo.attach(9);
  
  //myservo.write(90);  // set servo to mid-point
  //delay(50);
  //myservo.write(180);// set servo to mid-point
} 

void loop() {
  
  myservo.write(90);  // set servo to mid-point
  delay(1000);
  myservo.write(180);// set servo to mid-point
  delay(1000);
  myservo.write(270);  // set servo to mid-point
  delay(1000);
  myservo.write(360);// set servo to mid-point
  delay(1000);
  myservo.write(0);// set servo to mid-point
  delay(2000);
  
  } 
