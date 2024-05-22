#include <stdio.h>
/**
 * main - Runs code
 * @a: integer
 * @b: integer
 * Return: Always 0
 **/

int main(int a, int b)
{
	while (scanf("%d%d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}
	return (0);
}
