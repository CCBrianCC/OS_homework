#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int n=0, ans=0, flag=0, add=0;
	while(scanf("%d", &n)!=EOF)
	{
		ans=0;
		ans+=n;
		//�Ĥ@�����ܤFn�~ 
		
		while(1)
		{
			if(n>2)//���~�h 
			{
				add=0;
				ans+=n/3;//�[�W�W�@�����~�l���� 
				add+=n%3;//�ѤU�����F�� 

				n/=3;	
				n+=add;//�{�b�����~�� 
			}
			else//���~�� 
			{		
				if((n%3)==2)//�p�G�Ѩ�~ �i�H�A���@�~ 
				{ 
					ans++;//�ҥH++ 
					break;
				}
				else
				{
					break;//�ѤU�@�~�N�S��k�o 
				}
			}		
		}
		printf("%d\n", ans);	
	}
	
	return 0;
}
