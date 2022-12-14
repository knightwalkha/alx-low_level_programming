#include "main.h"

/**
 * _isalpha -> alphabetic letters are checked for
 * @c: character to be checked
 * return: returns 1 or 0, depending on the conditions
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
