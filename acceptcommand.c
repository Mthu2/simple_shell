#include "shell.h"

/*
 * acceptcommand - recieve user input
 * Return: what was given.
 */
int acceptcommand(void)
{
	size_t n = 0;
	char *buff = NULL;
	int size;

	size = getline(&buff, &n, stdin);

	return(size);
}
