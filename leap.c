#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,test;
	clrscr();
	scanf("%d",&test);
	while(t)
	{
		scanf("%d%d",&a,&b);
		for(i=a;i<=b;i++)
		{
			if((i%4==0)&&(i%100!=0)||(i%400==0))
			{
				printf("%d\t",i);	
			}
		}
			t--;
	}
	getsch();
}