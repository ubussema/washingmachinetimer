#include <Servo.h>

int const potPin = A5;
int potVal;
int angle;
Servo launchServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  potVal=0;
  angle=0;
  launchServo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  angle=map(potVal, 0, 1023, 0, 179);
  Serial.print("potVal: ");
  Serial.println(potVal);
  Serial.print("angle: ");
  Serial.println(angle);
  launchServo.write(angle);
  delay(1000);
}
