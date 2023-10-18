#include "main.h"
/**
 * _isalpha - program checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter and return 0 if it's not
 */
int _isalphabe(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
