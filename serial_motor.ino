#include <Servo.h>
Servo myservo_D;
Servo myservo_E;

int pos = 0;



void setup()

{

Serial.begin(9600);
while (!Serial);
Serial.println("-------------------------");
Serial.println("ARos is loading....");
delay(1000);
Serial.println("ARos loaded succesfully");
Serial.println("-------------------------");
myservo_D.attach(9);
myservo_E.attach(8);

Serial.println("calibrating servo...");
for(pos = 0; pos <= 180; pos += 1)

Serial.println("servo calibrated");
Serial.println("-------------------------");
Serial.println("Comand input online, write command to perform action");
Serial.println("-------------------------");

}

void loop() {

/*

myservo_D.writeMicroseconds(2299);
myservo_E.writeMicroseconds(701);
delay(1500);
myservo_D.writeMicroseconds(701);
myservo_E.writeMicroseconds(2299);
delay(1500);
myservo_D.writeMicroseconds(950);
myservo_E.writeMicroseconds(1520);
delay(1500);
*/

for(pos = 700; pos <= 2300; pos += 1)
if (Serial.available())


{
  int state = Serial.parseInt();
    
if (state < 10)

{
Serial.print(">");
Serial.println(state);
Serial.println("cannost execute command, too low number");

}

if (state >= 700 && state < 2300)
{
  Serial.print(">");
  Serial.println(state);
  Serial.print("turning servo to ");
  Serial.print(state);
  Serial.println(" degrees");
  myservo_D.writeMicroseconds(state);
  
}

}

}
