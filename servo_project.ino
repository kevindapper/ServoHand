#include <Servo.h>
Servo myServoX;
Servo myServoY;

const int X_pin = A0; //x axis
const int Y_pin = A1; //y axis

int val; //used to read user input via analog stick

 void setup() {
  myServoX.attach(7); //x servo connect to 7
  myServoY.attach(8); //y servo connect to 7
}

void loop() {
  //reads and moves based on x axis
  val = analogRead(X_pin);
  val = map(val, 0, 1023, 0, 180);
  myServoX.write(val);

  //reads and moves based on y axis
  val = analogRead(Y_pin);
  val = map(val, 0, 1023, 0, 180);
  myServoY.write(val);
  delay(1);
}
