#ifndef __GAME2_H__
#define __GAME2_H__

#include "stm32f4xx_conf.h"

#define pi 		3.1415926

static const u16 sinewave[200]={
 0x7FFF,0x8404,0x8808,0x8C0B,0x900A,0x9405,0x97FB,0x9BEB,0x9FD4,0xA3B5,0xA78D,0xAB5B,0xAF1E,0xB2D5,0xB67F,0xBA1B
,0xBDA9,0xC127,0xC495,0xC7F1,0xCB3B,0xCE72,0xD196,0xD4A5,0xD79E,0xDA81,0xDD4D,0xE002,0xE29F,0xE522,0xE78C,0xE9DC
,0xEC12,0xEE2B,0xF029,0xF20B,0xF3D0,0xF578,0xF701,0xF86D,0xF9BB,0xFAE9,0xFBF9,0xFCE9,0xFDBA,0xFE6B,0xFEFC,0xFF6D
,0xFFBE,0xFFEE,0xFFFE,0xFFEE,0xFFBE,0xFF6D,0xFEFC,0xFE6B,0xFDBA,0xFCE9,0xFBF9,0xFAE9,0xF9BB,0xF86D,0xF701,0xF578
,0xF3D0,0xF20B,0xF029,0xEE2B,0xEC12,0xE9DC,0xE78C,0xE522,0xE29F,0xE002,0xDD4D,0xDA81,0xD79E,0xD4A5,0xD196,0xCE72
,0xCB3B,0xC7F1,0xC495,0xC127,0xBDA9,0xBA1B,0xB67F,0xB2D5,0xAF1D,0xAB5B,0xA78D,0xA3B5,0x9FD4,0x9BEB,0x97FB,0x9405
,0x900A,0x8C0B,0x8808,0x8404,0x7FFF,0x7BFA,0x77F5,0x73F3,0x6FF4,0x6BF9,0x6803,0x6413,0x602A,0x5C49,0x5871,0x54A3
,0x50E0,0x4D29,0x497F,0x45E3,0x4255,0x3ED7,0x3B69,0x380D,0x34C3,0x318C,0x2E68,0x2B59,0x2860,0x257D,0x22B0,0x1FFC
,0x1D5F,0x1ADC,0x1872,0x1622,0x13EC,0x11D3,0x0FD5,0x0DF3,0x0C2E,0x0A86,0x08FD,0x0791,0x0643,0x0515,0x0405,0x0315
,0x0244,0x0193,0x0102,0x0091,0x0040,0x0010,0x0000,0x0010,0x0040,0x0091,0x0102,0x0193,0x0244,0x0315,0x0405,0x0515
,0x0643,0x0791,0x08FD,0x0A86,0x0C2E,0x0DF3,0x0FD5,0x11D3,0x13ED,0x1622,0x1872,0x1ADC,0x1D5F,0x1FFC,0x22B1,0x257D
,0x2860,0x2B5A,0x2E68,0x318C,0x34C3,0x380D,0x3B69,0x3ED7,0x4255,0x45E3,0x497F,0x4D2A,0x50E1,0x54A3,0x5871,0x5C49
,0x602A,0x6413,0x6803,0x6BF9,0x6FF4,0x73F3,0x77F6,0x7BFA};

void App_game2(void);
void Buf_back(u16 ypos);
void Redraw_back(u16 ypos);
void Play_sound(u8 tone);
void Finish_game2(void);



#endif


