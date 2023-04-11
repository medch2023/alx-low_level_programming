#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int len;

	len = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i][0]))
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			len += atoi(argv[i]);
		}
		printf("%d\n", len);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}
