/*

 * main.c
 *  Created on: Dec 12, 2020
 *      Author: Mohamed Elshazly
 */

/************************************************************************/
/*			       			INCLUDES             	                    */
/************************************************************************/

#include "State_M.h"
#include "APP.h"
/************************************************************************/
/*			       			MACROS              	                    */
/************************************************************************/

#define F_CPU 8000000

int main(void)
{

	DIO_Init();
	LCD_Init();

while(1)
{

	state_machine();
}
	return 0;

}
