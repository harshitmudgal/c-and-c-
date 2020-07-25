// C program on rock, paper and scissor game//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int choice;
    int random;
    while(choice!=4)
    {
    printf("\n\n please choose rock(1), paper(2), scissor(3) or quit(4):");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf(" \nYou chose: rock ");
    }
    if(choice==2)
    {
        printf("\nYou chose: paper");
    }
    if(choice==3)
    {
        printf("\nYou chose: scissor");
    }
     if(choice==4)
    {
        printf("\nYou chose to quit");
        break;
    }
    srand(time(0));
    random = rand() % 3 + 1;
    if(random==1)
    {
        printf("\nComputer chose: rock ");
    }
    if(random==2)
    {
        printf("\nComputer chose: paper");
    }
    if(random==3)
    {
        printf("\nComputer chose: scissor");
    }
    if(choice==1 && random==2)
       {
           printf("\nyou lose!");
       }
    if(choice==1 && random==3)
    {
        printf("\nyou won!");
    }
    if(choice==1 && random==1)
       {
           printf("\nTIE!");
       }
     if(choice==2 && random==1)
       {
           printf("\nyou win!");
       }
        if(choice==2 && random==2)
       {
           printf("\nTIE!");
       }
    if(choice==2 && random==3)
    {
        printf("\nyou lose!");
    }
     if(choice==3 && random==1)
       {
           printf("\nyou lose!");
       }
        if(choice==3 && random==2)
       {
           printf("\nyou win!");
       }
    if(choice==3 && random==3)
    {
        printf("\nTIE!");
    }

    }
    return 0;
}

