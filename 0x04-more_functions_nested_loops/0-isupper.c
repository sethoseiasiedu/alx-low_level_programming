#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: parameter
 * Return: 0 if successful
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
