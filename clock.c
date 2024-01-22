#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int hrs,min,sec,count;
    char meradian='A';
    char m='M';
    printf("\n Hours: ");
    scanf("%d",&hrs);
    printf("\n Min: ");
    scanf("%d",&min);
    printf("\n Sec: ");
    scanf("%d",&sec);
    count=0;
    if(hrs>23)
    {
        printf("\n invalid Time!!!");
        printf("\n Please Enter correct Time and Try again");
        exit(0);
    }
    if(min>59)
    {
        printf("\n invalid Time!!!");
        printf("\n Please Enter correct Time and Try again");
        exit(0);
    }
    if(sec>59)
    {
        printf("invalid Time!!!");
        printf("\n Please Enter correct Time and Try again");
        exit(0);
    }
     while(1)
    {
        system("cls");
        if(count>29)
        {
            sec++;
            count=0;
        }
        if(sec>59)
        {
            min++;
            sec=0;
        }
        if(min>59)
        {
            hrs++;
            min=0;
        }
        if(hrs>23)
        {
            hrs=0;
            meradian='A';
        }
        if(hrs>11)
        {
            meradian='P';
        }

        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("\n\t\t\t     Digital Clock Using C");
        printf("\n\t\t\t--------------------------------");
        printf("\n\t\t\t HOUR \t AM/PM \t MIN \t SEC");
        printf("\n\t\t\t %d \t %c%c \t %d \t %d",hrs,meradian,m,min,sec);
        printf("\n\t\t\t--------------------------------");
        


        count++;
    }
    return 0;
}