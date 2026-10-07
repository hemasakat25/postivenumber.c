#include<stdio.h>
int main()
{
    int choice;

    printf("Enter Choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("Monday");
        break;

        case 2: printf("Tuesday");
        break;

        case 3: printf("Wednsday");
        break;

        case 4: printf("Thurdsday");
        break;

        case 5: printf("Friday");
        break;

        case 6: printf("Saturday");
        break;

        case 7: printf("Sunday");
        break;

       defaullt :
            printf("Invalid Day");
    }
        return 0;
    }
