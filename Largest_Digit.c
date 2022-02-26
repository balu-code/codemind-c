#include<stdio.h>
main()
{
    int num,reminder,largest=0;
    scanf("%d",&num);
    while(num>0)
    {
        reminder=num%10;
        if(largest<reminder)
        {
            largest=reminder;
        }
        num=num/10;
    }
    printf("%d",largest);
}