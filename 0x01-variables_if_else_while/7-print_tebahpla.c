#include <stdio.h>
/**
*main - Entry point
*Return: allways null
*/
int main(void)
{
	char alp[24] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 24; i >= 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
