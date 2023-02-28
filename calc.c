#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b,opt;
	float res;
	do
	{
	printf("select the operation to perform \n 1 -ADD \n 2 -SUB- \n 3 -MUL* \n 4 -DIV/\n");
	scanf("%d",&opt);
	switch (opt)
	{
		case 1:
			printf("enter the first number\n");
			scanf("%d",&a);
			printf("enter the second number\n");
			scanf("%d",&b);
  			res=a+b;
			printf("the result of sum =%f\n",res);
			break;
		case 2:
			printf("enter the first number\n");
			scanf ("%d",&a);
			printf("enter the second number\n");
			scanf("%d",&b);
			res=a-b;
			printf("the result of subtraction two value is =%f\n",res);
break;
		case 3:
			printf("enter the first number \n");
			scanf("%d",&a);
			printf("enther the second number \n");
			scanf("%d",&b);
			if (b==0)
			{
			printf("cant divide a number using '0' pleaes give proper input");
			scanf("%d",&b);
			}
			res=a*b;
			printf("the result of division of two number is  =%f\n",res);
			break;
			case 4:
			printf("enter the first number \n");
			scanf("%d",&a);
			printf("enter the second number\n");
			scanf("%d",&b);
			res=a/b;
			printf("The result =%f\n",res);
break;
			default:
printf("somthing went wrong");
}
printf("\n**************************************************************\n");
}while(opt!=5);
return 0;
}

