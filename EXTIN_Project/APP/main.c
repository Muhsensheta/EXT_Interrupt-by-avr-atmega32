/*
 * main.c
 *
 *  Created on: ٠٧‏/٠٢‏/٢٠٢٣
 *      Author: houras
 */
#include"STD_TYPES.h"
#include"LED_int.h"
#include"GIE_int.h"
#include"EXT1_int.h"

void Action0(void)
{
  H_Led_void_toggle(RED_LED);
}

void main()
{
	H_Led_void_ledInit(RED_LED);
	M_EXTI_void_Enable(EXTI_INT0_ID,EXTI_TRIG_FALL__EDGE);
	M_EXTI_void_setCallback(Action0,EXTI_INT0_ID);
	M_GIE_void_enable();
	while(1)
	{

	}
}
