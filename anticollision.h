//---------------------------------
//Functions for anticollision------
//---------------------------------
	
#include <stdio.h>
#include "parallel.h"
#include "SPI.h"
#include "globals.h"


void EnableSlotCounter(void);
void DisableSlotCounter(void);
void InventoryRequest(unsigned char *mask, unsigned char lenght);
unsigned char RequestCommand(unsigned char *pbuf, unsigned char lenght, unsigned char brokenBits, char noCRC);

