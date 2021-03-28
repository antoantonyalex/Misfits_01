/*******************************************************************************
  Title                 :   Smart Switch from Misfits
  Filename              :   Misfits.h
  Author                :   Ajee,Anto,Nithin,Mohan
  Origin Date           :   27/02/2012
  Version               :   1.0.0
  Compiler              :   Arduino 1.8.14
  Target                :   ESP32
  Notes                 :   None
*******************************************************************************/

// include library to read and write from flash memory
#include <EEPROM.h>

const byte SwitchSelect_pin   = 5;
const byte SwitchEnter_pin    = 8;
const byte SwitchDowen_pin    = 6;
const byte SwitchUpp_pin      = 7;

byte  SwitchEnter_b  = 0;
byte  SwitchUpp_b    = 0;
byte  SwitchDowen_b  = 0;
byte  Switch_Selec_b = 0;

//CODE STARTS AFTER PASSWORD CHECK IS COMPLETED AFTER 
void Mts_SmartSwitch_setdate(void);
void Mts_SmartSwitch_sethour(void);
void Mts_SmartSwitch_setmin(void);
void Mts_SmartSwitch_welcomepage(void);
void Mts_SmartSwitch_timerrequired(void);
