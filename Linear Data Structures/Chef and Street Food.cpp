#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,profit=0,pro=0,people,s,N;

	cin>>T;
	for(int i=0;i<T;i++)
	{profit=0;
		cin>>N;
			int d[N][3];
		for(int j=0;j<N;j++)
		{
			for(int k=0;k<3;k++)
			{
				 
				cin>>d[j][k];
			}
		}
		
		for(int j=0;j<N;j++)
		{
			people=d[j][1]/(d[j][0]+1);
			pro=people*d[j][2];
			profit=max(profit,pro);
		}
		
		cout<<profit<<endl;
	}
}
