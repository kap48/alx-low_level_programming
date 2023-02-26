#include "main.h"

/**
 * _islower - check char
 * @c:char to check
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
