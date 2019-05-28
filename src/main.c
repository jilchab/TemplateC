#include <stdio.h>
#include <stdlib.h>

#include "inc.h"

int main(void)
{
    printf("%s\n", get_text());

#ifdef TEST
    printf("%d\n", TEST_VAL);
#endif

    return 0;
}

