#include "main.h"

/**
 * _strlen - return the length of a string
 * @str: string argument
 * Return: 1
*/
int _strlen(char *str)
{
	int stl;

	for (stl = 0; str[stl] != 0; stl++)
	{
		;
	}
	return (stl);
}

/**
 * _strlenc - Strlen function which is for constant char pointer str
 * @str: character pointer
 * Return: i
*/
int _strlenc(const char *str)
{
	int stl;

	for (stl = 0; str[stl] != 0; stl++)
	{
		;
	}
	return (stl);
}
