#include "kp.h"

void
ke_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);
    ke_vprintf(str, args);
    va_end(args);
}

void
ke_vprintf(const char *str, va_list args)
{
    //TODO: implement
    ke_assert(0);
    UNREFERENCED(str);
    UNREFERENCED(args);
}
