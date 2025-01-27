#ifndef RPRINTF_H
#define RPRINTF_H

#include <stdarg.h>

void esp_printf(void (*f_ptr)(char), char* ctrl, ...);
void esp_vprintf(void (*f_ptr)(char), char* ctrl, va_list argp);

#endif 