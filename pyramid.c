#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;

    do
    {
        n = get_int("Height = ");
    }
    while (n > 10 || n< 0 );

    for (int i = 0; i <= n; i++)

    {
        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}