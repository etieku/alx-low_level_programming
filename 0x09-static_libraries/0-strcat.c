#include "main.h"
 /**
 * _strcat - This function appends the string pointed to
 * by src to the end of the string
 * pointed to by dest. The resulting concatenated string is stored in dest.
 * The terminating null byte character in dest is overwritten by the first
 * character of src, and a null byte is appended at the end of the result.
 * @dest: The destination string to append to.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string, which is the concatenation of
 *         dest and src.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	dest[i] = '\0';
	return (dest);
}
