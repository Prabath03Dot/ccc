#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,j,r;
    printf("enter the rows\n");
    scanf("%d",&r);
    printf("\n\n");

    for (k=0;k<r;k++){
            for(j=0;j<=k;j++)
            {
                printf("* ");
            }
        printf("\n");
        printf("\n");
    }


    return 0;
}
