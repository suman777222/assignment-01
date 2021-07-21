#include<stdio.h>

int main()
{
    int n, a = 0, b = 0, c = 0;
    printf("How many voters can cast their Vote :  \n");
    scanf("%d",&n);
    printf("press 1 for AAA\n");
    printf("press 2 for BBB\n");
    printf("press 3 for CCC\n");
    for (int i = 0; i < n; i++)
    {
        int j;
        printf("\nenter the no. for your party  ");
        scanf("%d",&j);
        switch (j)
        {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        }
    }
    if (a > b && a > c)
    {
        printf( "AAA win");
    }
    else if (b > a && b > c)
    {
        printf( "BBB win");
    }
    else
    {
        printf( "CCC win");
    }
    return 0;
}
