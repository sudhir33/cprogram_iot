#include<stdio.h>
int RPM(int a,int b)// 34 43
{
	int res=0;
	while(a!=0)//0!=0
	{
		if(a%2==1)//1%2==1
		{
			res+=b;//86+1376=1462		
		}
		a/=2;//0
		b*=2;//2354
	}
	return res;
}

int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);// 10 20
	res=RPM(a,b);//fub call
	printf("%d",res);
	return 0;
}

/*

*/














