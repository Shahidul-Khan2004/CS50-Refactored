#include <stdio.h>

int main(void)
{

    // get  a valid user input

    int n;
    printf("Height: ");
    do
    {
        scanf("%d", &n);
    }
    while (n < 1 || n > 8);

    // make a right aligned piramid of hashes

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
