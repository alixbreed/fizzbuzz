#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=1; i<=100; i++)
    {
        if((i%3) == 0){
            if ((i%5) == 0)
                printf("FizzBuzz\n");
            else
                printf("Fizz\n");
        }
        else if ((i%5) == 0)
                printf("Buzz\n");
             else
                printf("%d\n", i);
    }
    return 0;
}
