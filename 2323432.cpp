#include <stdio.h>
#include <math.h>
int main()
{
	bool a=true;
	int select;
	//��������
	printf("*************************************************\n");
	printf("*        1 �ӷ�                                 *\n");
	printf("*        2 ����                                 *\n");
	printf("*        3 �˷�                                 *\n");
	printf("*        4 ����                                 *\n");
	printf("*        5 ȡģ                                 *\n");
	printf("*        6 ��η�                               *\n");
	printf("*        7 �󿪷�                               *\n");
	printf("*     ��������ǹ���ѡ������˳�                *\n");
	printf("*************************************************\n");
	while(a)
	{
		printf("����˵��\n");
		scanf("%d",&select);
		//ʵ�ּ��������
		//if����жϳ�����
		if(select>=1&&select<=7)
		{
			switch (select)
			{
			case 1:
				{
					float num1,num2;
					printf("���ӷ�\n");
					printf("����������\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					printf("%g+%g=%g\n",num1,num2,num1+num2);
					break;
				}
			case 2:
				{
					float num1,num2;
					printf("������\n");
					printf("����������\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					printf("%g-%g=%g\n",num1,num2,num1-num2);
					break;
				}
			case 3:
				{
					float num1,num2;
					printf("���˷���\n");
					printf("����������\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					printf("%g*%g=%g\n",num1,num2,num1*num2);
					break;
				}
			case 4:
				{
					float num1,num2;
					printf("��������\n");
					printf("����������\n");
					scanf("%f",&num1);
					scanf("%f",&num2);
					if(num2==0)
					{
						printf("��������Ϊ0��\n");
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
					printf("ȡģ\n");
					printf("����������\n");
					scanf("%d",&num1);
					scanf("%d",&num2);
					printf("%dȡ��%d=%d\n",num1,num2,num1%num2);
					break;
				}
			case 6:
				{
					double num1,num2;  
					printf("��η�\n");
					printf("����������\n");
					scanf("%lf", &num1);  
					scanf("%lf", &num2); 
					printf("%g^%g=%g\n",num1,num2,pow(num1,num2));  
					break;
				}
			case 7:
				{
					float num1,num2;
					printf("�󿪷���\n");
					printf("����һ����\n");
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