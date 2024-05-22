#include <stdio.h>

/**
 * main - Runs code
 * @argc: arguments passed to the commmand line
 * @argv: array to contain the commands
 * Return: Always 0
 **/

int main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		printf("%s ", argv[argc]);
		printf("\n");
	}
}
