#include "main.h"
/**
 * get_func - look for the specifier
 * @s: variable to the function
 * Return: function
 */
int (*get_func(char s))(va_list)
{
	int m = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	while (arr[m].valid)
	{
		if (x == arr[m].valid[0])
			return (arr[m].f);
		m++;
	}
	return (NULL);
}
