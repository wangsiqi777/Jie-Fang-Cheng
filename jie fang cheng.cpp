#include <stdio.h>
int main()
{
float a,b,c,d,e,f,x,y;
printf("�ж�Ԫһ�η����飺\n");
printf("ax+by=c\n");
printf("dx+ey=f\n");
printf("��������Ӧ��a,b,c,d,e,f\n");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
if(a*e-d*b==0)
{
	printf("�˷�������Ψһ�⣡\n");
}else
{
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	printf("x=%f,y=%f\n");
}
return 0;
} 
