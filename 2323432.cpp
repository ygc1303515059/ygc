#include <stdio.h>
#include <math.h>
int main()
{
	bool a=true;
	int select;
	//计算机面板
	printf("*************************************************\n");
	printf("*        1 加法                                 *\n");
	printf("*        2 减法                                 *\n");
	printf("*        3 乘法                                 *\n");
	printf("*        4 除法                                 *\n");
	printf("*        5 取模                                 *\n");
	printf("*        6 求次方                               *\n");
	printf("*        7 求开方                               *\n");
	printf("*     输入任意非功能选项序号退出                *\n");
	printf("*************************************************\n");
	while(a)
	{
		printf("输入菜单项：\n");
		scanf("%d",&select);
		//实现计算机功能
		//if语句判断出程序
		if(select>=1&&select<=7)
		{
			switch (select)
			{
			case 1:
				{
					float num1,num2;
					printf("做加法\n");
					printf("输入两个数\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					printf("%g+%g=%g\n",num1,num2,num1+num2);
					break;
				}
			case 2:
				{
					float num1,num2;
					printf("做减法\n");
					printf("输入两个数\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					printf("%g-%g=%g\n",num1,num2,num1-num2);
					break;
				}
			case 3:
				{
					float num1,num2;
					printf("做乘法。\n");
					printf("输入两个数\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					printf("%g*%g=%g\n",num1,num2,num1*num2);
					break;
				}
			case 4:
				{
					float num1,num2;
					printf("做除法。\n");
					printf("输入两个数\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					if(num2==0)
					{
						printf("除数不能为0！\n");
					}
					else
					{
						printf("%g/%g=%g\n",num1,num2,num1/num2);
					}
					break;
				}
			case 5:
				{
					int num1,num2;
					printf("取模\n");
					printf("输入两个数\n");
					scanf("%d",&num1);
					scanf("%d",&num2);
					printf("%d取余%d=%d\n",num1,num2,num1%num2);
					break;
				}
			case 6:
				{
					double num1,num2;  
					printf("求次方\n");
					printf("输入两个数\n");
					scanf("%lf", &num1);  
					scanf("%lf", &num2); 
					printf("%g^%g=%g\n",num1,num2,pow(num1,num2));  
					break;
				}
			case 7:
				{
					float num1,num2;
					printf("求开方。\n");
					printf("输入一个数\n");
					scanf("%f",&num1);
					printf("%f^0.5=%f\n",num1,sqrt(num1));
					break;
				}
			}
		}
		else
			break;
	}
	return 0 ;
}