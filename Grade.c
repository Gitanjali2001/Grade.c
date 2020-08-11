#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks");
	scanf("%d",&marks);
	printf("%s",marks>90?"GradeA":(marks>80?"GradeB":(marks>60?"GradeC":(marks>40?"GradeD":"GradeF"))));
	return 0;
}
