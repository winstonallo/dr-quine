#include <stdio.h>
#define x "#define x %c%s%c"
#define y "#define y %c%s%c"
#define z() int main() { \
    char *code = "#include <stdio.h>%c#define x %c%s%c%c#define y %c%s%c%c#define z() int main() { %c%c    char *code = %c%s%c; %c%c    FILE* f = fopen(%cGrace_kid.c%c, %cw%c); %c%c    if (!f) { return 1; } %c%c    fprintf(f, code, 10, 34, x, 34, 10, 34, y, 34, 10, 92, 10, 34, code, 34, 92, 10 ,34, 34, 34, 34, 92, 10, 92, 10, 92, 10, 92, 10, 92, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34); %c%c    fclose(f); %c%c    return 0; %c%c}%c%c/*%c * This is a self-replicating program%c * It creates a copy of itself in a file named Grace_kid.c%c */%c%cz()"; \
    FILE* f = fopen("Grace_kid.c", "w"); \
    if (!f) { return 1; } \
    fprintf(f, code, 10, 34, x, 34, 10, 34, y, 34, 10, 92, 10, 34, code, 34, 92, 10 ,34, 34, 34, 34, 92, 10, 92, 10, 92, 10, 92, 10, 92, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34); \
    fclose(f); \
    return 0; \
}

/*
 * This is a self-replicating program
 * It creates a copy of itself in a file named Grace_kid.c
 */

z()
