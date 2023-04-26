#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2

/**
  * struct parameters - parameters struct
  *
  * @unsign: flag if unsigned value
  *
  * @plus_flag: on if plus_flag specified
  * @space_flag: on if hashtag_flag specified
  * @hashtag_flag: on if _flag specified
  * @zero_flag: on if _flag specified
  * @minus_flag: on if _flag specified
  *
  * @width: field specified
  * @precision: field precision specified
  *
  * @h_modifier: on if h_modifier is specified
  * @l_modifier: on if l_modifier is specified
  *
  */

typedef struct formats
{
	char *sym;
	int (*f)(va_list);
} fmtsSpefier;

int _putchar(char c);
int _printf(const char *format, ...);
int charsFormats(const char *format, va_list args);
int _percent(va_list list);
int _char(va_list list);
int _string(va_list list);
int _integer(va_list list);

#endif
