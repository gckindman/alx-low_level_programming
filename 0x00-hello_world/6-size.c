#include <stdio.h>

/**
 * main - A program that prints the size of various types on the computer
 *
 * Return: Always return 0.
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a double int: %zu byte(s)\n", sizeof(double));
	return (0);
}