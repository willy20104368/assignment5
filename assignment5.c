#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int f1(int val)
{
    int num = 0;
    int *ptr = &num;
    if (num == 0)
    { 
        /* text had val == 0, but val is not in scope */
        int val;
        val = 5;
        ptr = &val;
    }

    return(*ptr + 1);
}

int main()
{
    int val = 5;
    int result;
    result = f1(val);
    printf("result = %d \n", result);

    return 0;
}