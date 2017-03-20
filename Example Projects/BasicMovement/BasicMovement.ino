#include <EZStepper.h>

//                                              //Constructor:
//                                              //    1.  Steps per revolution
//                                              //    2. to 5. Driver pins.
EZStepper stepper(2094, 4, 5, 6, 7);

void setup() {
  Serial.begin(9600);

  //                                            //Set the velocity to 64 half-steps per second.
  stepper.subSetStatesPerSec(64);
  //                                            //Move 524 steps (a quarter of revolution).
  stepper.subMoveBySteps(524);
  Serial.println(stepper.numGetCurrentDegrees());

  //                                            //Change the direction.
  stepper.subSetDirection(stepper.LEFT);
  //                                            //Move to 45° with respect of the origin i.e. from 270° (previous position) to 45°, or 90° to the left.
  stepper.subMoveByDegrees(45);
  Serial.println(stepper.numGetCurrentDegrees());
}

void loop() {
  
}
