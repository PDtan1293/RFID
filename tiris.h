//------------------------------------------------------//
//This file contains the funcions needed for the	//
//Texas Instruments Tag-IT protocol.			//
//The functions in the HOST protocol are numbered	//
//from 0x20 upwards.					//
			//
//------------------------------------------------------//

#include "parallel.h"
#include "SPI.h"
#include <stdio.h>
#include "anticollision.h"
#include "globals.h"


void TIInventoryRequest(unsigned char *mask, unsigned char lenght);