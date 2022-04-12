
#include <stdio.h>
#include <conio.h>

void insertionsort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        t = a[i];
        for (j = i - 1; j >= 0 && t < a[j]; j--)
            ;
        a[j + 1] = a[j];
        a[j + 1] = t;
    }
}
void main()
{
    int a[100], k, t,m;
    printf("Enter the Number of Element" );
    scanf("%d", &m);
    for (k = 0; k < m; k++)
    {
        printf("a[%d]=" ,k);
        scanf("%d", &a[k]);
    }
    insertionsort(a, m);
    printf("The Shorted Element Are :-");
    for (k = 0; k < m; k++)
                printf(" \n %d", a[ k ] );
                 getch();
               
}