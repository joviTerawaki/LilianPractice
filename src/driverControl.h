#include "vex.h"

//QWUESFTY

//TELEOP
void driverControl (){
  frontLeft.spin(forward, Controller1.Axis3.value(), pct);
  frontRight.spin(forward, Controller1.Axis2.value(), pct);
  backLeft.spin(forward, Controller1.Axis3.value(), pct);
  backRight.spin(forward, Controller1.Axis2.value(), pct);
}

//AUTONOMOUS 
void moveForward (int speed, int enc){
  while(frontLeft.position(degrees) <= enc){
    frontLeft.spin(forward, speed, pct);
    frontRight.spin(forward, speed, pct);
    backLeft.spin(forward, speed, pct);
    backRight.spin(forward, speed, pct);

  }
    frontLeft.stop();
    frontRight.stop();
    backLeft.stop();
    backRight.stop();
}

void moveBackward (int speed, int enc){
  while(frontLeft.position(degrees) >= -enc){
    frontLeft.spin(reverse, speed, pct);
    frontRight.spin(reverse, speed, pct);
    backLeft.spin(reverse, speed, pct);
    backRight.spin(reverse, speed, pct);

  }
    frontLeft.stop();
    frontRight.stop();
    backLeft.stop();
    backRight.stop();
}

void turnRight (int speed, int enc){
  while(frontLeft.position(degrees)<= enc){
    frontLeft.spin(forward, speed, pct);
    frontRight.spin(reverse, speed, pct);
    backLeft.spin(forward, speed, pct);
    backRight.spin(reverse, speed, pct);
  }
    frontLeft.stop();
    frontRight.stop();
    backLeft.stop();
    backRight.stop();  
}

void turnLeft (int speed, int enc){
  while(frontLeft.position(degrees)>= -enc){
    frontLeft.spin(reverse, speed, pct);
    frontRight.spin(forward, speed, pct);
    backLeft.spin(reverse, speed, pct);
    backRight.spin(forward, speed, pct);
  }
    frontLeft.stop();
    frontRight.stop();
    backLeft.stop();
    backRight.stop();  
}