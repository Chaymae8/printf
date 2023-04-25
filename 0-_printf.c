#include "main.h"
/**
* _printf - a function that produces output according to a format.
* @format: a character string
* Return: buff or -1 if format is NULL
*/
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int buff = 0, i;
		int (*f)(va_list);
		va_list args;

		va_start(args, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format && format[i])
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					buff += _putchar(format[i]);
					i += 2;
				}
				else
				{
					f = get_func(format[i + 1]);
					if (f)
						buff += f(args);
					else
						buff = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				buff += _putchar(format[i]);
				i++;
			}
		}
		va_end(args);
		return (buff);
	}
	return (-1);
}
