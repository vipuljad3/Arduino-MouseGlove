#ifndef __POINTERMOUSE__H
#define __POINTERMOUSE__H

#define NUM_READ 10
#define DELTA_VALUE 5

#define COM_PORT "/dev/ttyACM1"

int readSerial(int, int*, int*);
void moveMouse(int, int, Display *, Window, int, int);
#endif