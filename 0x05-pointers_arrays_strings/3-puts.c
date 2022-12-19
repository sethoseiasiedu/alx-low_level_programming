#include <stdio.h>
#include "main.h"

/**
* _puts - function that prints a string, followed by a new line, to stdout
* @str: pointer value
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index ++)
	{
		_putchar(str[index]);
		 i++;
	}

	_putchar('\n');
}
