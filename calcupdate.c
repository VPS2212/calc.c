:#include<stdio.h>
int main()
{
int a,b,opt=0;
float res;
printf("Enter the first Number:\n");
scanf("%d",&a);
printf("Select the select calucation mode \n 1-ADD \n 2-Sub \n 3-Multiplication \n 4-Division \n");
scanf("%d",&opt);
if (opt<=4)
{
printf("Enter the second Number:\n");
scanf("%d",&b);
}
else
{
	printf("Select The Proper Mode");
}

switch (opt)
{
case 1:
    res=a+b;
    printf("%f\n",res);
    break;
case 2:
    res=a-b;
    printf("%f\n",res);
    break;
case 3:
    res=a*b;
    printf("%f\n",res);
    break;
case 4:
    res=a/b;
    printf("%f\n",res);
    break;
default:
printf("\nsomthing went wrong\n");
}
printf("\n ************************************************************** \n");
return 0;
}

