#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: size.
 *
 * Return: void return.
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *new;

	new = malloc(sizeof(int) * b);
	if (new == NULL)
		exit(98);
	return (new);
}