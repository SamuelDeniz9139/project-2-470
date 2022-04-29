/* Sweep by BARRAGAN <http://barraganstudio.com>
This example code is in the public domain.
modified 8 Nov 2013 by Scott Fitzgerald
https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep */
#include <Servo.h>
const int butPin = 2; //pushbutton pin number
int butState = 0;
Servo myservo;
bool twist = true;
int pos = 0;    //servo position
void setup() {
  myservo.attach(9);  //attaches the servo to its object
  pinMode(buttonPin,INPUT);
}
void loop() {
  butState = digitalRead(butPin);
  if (butState == HIGH) {
    twist=true;
  } else {
    twist=false;
  }
  if(twist==true){
    for (pos = 0; pos <=25; pos += 1) {// tell servo to go to pos and wait 15 ms
      myservo.write(pos);
      delay(15);
    }
    for (pos = 124; pos >=90; pos -= 1){//goes from 0 to 180 degrees in 1-degree steps
      myservo.write(pos); //wait 15ms for servo to go to position in variable 'pos’
      delay(15);
    }
  }
  delay(15);
}
