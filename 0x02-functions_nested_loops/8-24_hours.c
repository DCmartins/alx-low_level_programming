#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of jack bauer
 * Return: ...
 */

void jack_bauer(void)

{

	int a, b, c, d;

	for(a = 0; a < 24; a++)
	{
	for(b = 0; b < 60; b++)
	{
	
	c = a;
	d = b;
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	_putchar(':');
	_putchar((d / 10) + '0');
	_putchar((d % 10) + '0');
	_putchar('\n');
	}
	}

}

	
