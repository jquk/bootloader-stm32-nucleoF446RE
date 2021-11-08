#include <stdint.h>
#include "Board_LED.h"

#define USER_LED_ID 0

void delay(void);

int main(void)
{
	
 	LED_Initialize();
	while(1)
	{
		(void)LED_On(USER_LED_ID);
		delay();
		(void)LED_Off(USER_LED_ID);
		delay();
	}

	return 0;
}

void delay(void)
{
	for(unsigned int i = 0; i < 500000; i++)
	{
		// if nop, e.g. semicolon, then it will not delay anything.
		uint32_t ledCount = LED_GetCount();
	}
}

