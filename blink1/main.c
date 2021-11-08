#include <stdint.h>
#include "Board_LED.h"

#define USER_LED_ID 0

/* Local functions */
void delay(void);

/*
* Continuosly toggle on/off the user LED,
* with a frequency proportional to the for loop iterations of the delay() function.
*/
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

/*
* Silly function to just delay the execution of the next LED toggle
*/
void delay(void)
{
	for(unsigned int i = 0; i < 500000; i++)
	{
		/* With this compiler for Keil, if nop is used (e.g. semicolon),
		then the compiler will ignore the loop and not delay anything.*/
		uint32_t ledCount = LED_GetCount();
	}
}

