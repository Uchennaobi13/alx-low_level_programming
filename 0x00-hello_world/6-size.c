#include <stdio.h>
/**
 * main - prints size of a computer
 * Return: 0
 */

int main(void)
{
	printf("size of a char: %zu byte(s) \n", sizeof(char));
	printf("size of a int: %zu byte(s) \n", sizeof(int));
	printf("size of a long: %zu byte(s) \n", sizeof(long int));
	printf("size of a long: %zu byte(s) \n", sizeof(long long int));
	printf("size of a float: %zu byte(s) \n", sizeof(float));
	return (0);
}
