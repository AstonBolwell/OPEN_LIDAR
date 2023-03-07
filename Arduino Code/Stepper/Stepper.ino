#include <Stepper.h>
const int stepsPerRevolution = 2038;

Stepper stepper = Stepper(stepsPerRevolution, 44, 40, 42, 38);

void setup(){
  stepper.setSpeed(15);
}

void loop(){
  
  stepper.step(stepsPerRevolution);
  delay(1000); 

  stepper.step(-stepsPerRevolution);
  delay(1000); 
}
