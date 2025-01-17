
#ifndef PDFUSB_4550_H
#define	PDFUSB_4550_H

// ------------------------------------------------------ fixed_address_momory.h
#define FIXED_ADDRESS_MEMORY

#define HID_CUSTOM_OUT_DATA_BUFFER_ADDRESS  0x500   // for HID device
#define HID_CUSTOM_IN_DATA_BUFFER_ADDRESS   0x540

#if defined(__XC8)
  #define IN_DATA_BUFFER_ADDRESS_TAG      @0x500    // for CDC device (XC8)
  #define OUT_DATA_BUFFER_ADDRESS_TAG     @0x540
  #define CONTROL_BUFFER_ADDRESS_TAG      @0x580
#endif
// ------------------------------------------current adc/buttons/leds. h/c files
//                                                      legacy HardwareProfile.h


//-------------------------------------------------------------------------- LED

#define mInitAllLEDs()      LATD &= 0xF0; TRISD &= 0xF0;
//#define mLED_1              LATDbits.LATD0
//#define mLED_2              LATDbits.LATD1
//#define mLED_3              LATDbits.LATD2
//#define mLED_4              LATDbits.LATD3


//#define mGetLED_1()         mLED_1
//#define mGetLED_2()         mLED_2
//#define mGetLED_3()         mLED_3
//#define mGetLED_4()         mLED_4

//#define mLED_1_On()         mLED_1 = 1;
//#define mLED_2_On()         mLED_2 = 1;
//#define mLED_3_On()         mLED_3 = 1;
//#define mLED_4_On()         mLED_4 = 1;

//#define mLED_1_Off()        mLED_1 = 0;
//#define mLED_2_Off()        mLED_2 = 0;
//#define mLED_3_Off()        mLED_3 = 0;
//#define mLED_4_Off()        mLED_4 = 0;

//#define mLED_1_Toggle()     mLED_1 = !mLED_1;
//#define mLED_2_Toggle()     mLED_2 = !mLED_2;
//#define mLED_3_Toggle()     mLED_3 = !mLED_3;
//#define mLED_4_Toggle()     mLED_4 = !mLED_4;

//----------------------------------------------------------------------- SWITCH

#define mInitSwitch()       TRISBbits.TRISB4=1;TRISBbits.TRISB5=1;
//#define mGetSwitch()        !PORTBbits.RB4


//------------------------------------------------------------------------- POTI
#define mInitPoti()         TRISAbits.TRISA0 = 1;
//#define mGetPoti()          PORTAbits.RA0

void initADC(void);
#define initCLKPLL()    

#endif	

