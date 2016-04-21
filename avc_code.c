// Code for AVC challenge

#include <stdio.h>
#include <time.h>

// load methods from ENGR101 lib
extern "C" int init_hardware();
extern "C" int read_analog(int ch_adc);
extern "C" int sleep(int sec, int usec);
extern "C" int write_digital(int chan, char level);
extern "C" int set_motor(int motor, int dir, int speed);

int speedL = 64;
int speedR = 64;

int main {
  init_hardware();
  set_motor(1, 1, speedL);
  set_motor(2, 2, speedR);
  // sleep(3, 0) sleeps for 3 seconds
  return 0;
  }
