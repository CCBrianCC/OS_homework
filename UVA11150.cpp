#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int n=0, ans=0, flag=0, add=0;
	while(scanf("%d", &n)!=EOF)
	{
		ans=0;
		ans+=n;
		//材Ω耻n瞺 
		
		while(1)
		{
			if(n>2)//ゑㄢ瞺 
			{
				add=0;
				ans+=n/3;//Ω瞺传 
				add+=n%3;//逞传ぃ 

				n/=3;	
				n+=add;//瞷Τ瞺计 
			}
			else//ゑㄢ瞺ぶ 
			{		
				if((n%3)==2)//狦逞ㄢ瞺 传瞺 
				{ 
					ans++;//┮++ 
					break;
				}
				else
				{
					break;//逞瞺碞⊿快猭舘 
				}
			}		
		}
		printf("%d\n", ans);	
	}
	
	return 0;
}
