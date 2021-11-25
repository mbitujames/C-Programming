#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter integer from the keyboard\n");
    scanf("%d",&x);
    if(x%2==0)
    {
    printf("%d is  an odd number",x);
    }

    else if(x%2==1)
    {
    printf("%d is a even number",x);
    }
    return 0;
}
