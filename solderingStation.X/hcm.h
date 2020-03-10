
#ifndef HCM_H
#define	HCM_H

#include <xc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <pic.h>

#include<pic16f877a.h>

#define _XTAL_FREQ  20000000


void systemInit(void);

void adcInit(void);

int readADC(uint8_t);

#endif	

