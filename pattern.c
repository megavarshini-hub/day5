#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
        int rows;
        scanf("%d", &rows);
        for(int a=1;a<=rows;a++)
        {
        for(int b=a;b<rows;b++)
        {
            printf(" ");
                
        }
            for(int c=1;c<=rows;c++)
            
{
    printf("*");
}
            {
                
             printf("\n");
            }
        }

    return 0;
}
