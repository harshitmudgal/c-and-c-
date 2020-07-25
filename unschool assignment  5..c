#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[30];
    int empid;
    int exp;
    float slry;
};
int main()
{
    int i=0;

struct employee e[5];
printf("Enter the details \n");
    for(i=0;i<5;i++)
    {
        printf("Name, Employee Id, Experience and Salary\n ");
scanf("%s %d %d %f",&e[i].name,&e[i].empid,&e[i].exp,&e[i].slry);
    }
printf("Details\n");
for(i=0;i<5;i++)
{
    printf("\nName:%s\n Id:%d\n Experience:%d\n Salary:%f\n\n",e[i].name,e[i].empid,e[i].exp,e[i].slry);
}

return 0;
}


