#include<stdio.h>
struct employee
{
    int ph,age,salary;
    char name[25];

}emp[100];
int main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the information about employee %d",i);
		printf("\nName:");
		scanf("%s",&emp[i].name);
		printf("Age:");
		scanf("%d",&emp[i].age);
		printf("Phone Number:");
		scanf("%d",&emp[i].ph);
		printf("Salary:");
		scanf("%d",&emp[i].salary);
			}
	printf("\nNAME\tAGE\tPH NUMBER \tSALARY\n");
	for(i=1;i<=n;i++)
	{
	printf("%s\t%d\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].ph,emp[i].salary);
	}
	return 0;

}
