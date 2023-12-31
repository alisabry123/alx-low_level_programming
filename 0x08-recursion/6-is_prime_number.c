#include "main.h"

/**
 * is_prime_number - check if the input is a prime number
 *
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
}
