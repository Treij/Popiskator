#include <AFMotor.h>

AF_Stepper stepper1(48, 1);
AF_Stepper stepper2(48, 2);

void setup() {
  stepper1.setSpeed(100);
  stepper2.setSpeed(100);

  stepper1.step(10, FORWARD, MICROSTEP);
  stepper2.step(10, FORWARD, MICROSTEP);
  stepper1.step(10, BACKWARD, MICROSTEP);
  stepper2.step(10, BACKWARD, MICROSTEP);
}

void loop() {
  // put your main code here, to run repeatedly:

}
