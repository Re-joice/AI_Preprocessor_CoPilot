#ifndef DEBUG_MACRO_H
#define DEBUG_MACRO_H

#include <stdio.h>

/* Safe MAX macro (fixes precedence issues) */
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/* Debug macro setup */
#ifdef DEBUG_MODE

#define DEBUG(msg) \
    fprintf(stderr, "DEBUG [%s:%d]: %s\n", __FILE__, __LINE__, msg)

#else

#define DEBUG(msg) do { } while (0)

#endif /* DEBUG_MODE */

#endif /* DEBUG_MACRO_H */
