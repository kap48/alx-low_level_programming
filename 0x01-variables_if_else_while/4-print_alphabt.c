#include <stdio.h>
/**
*main - Entry point
*Return: allways null
*/
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
