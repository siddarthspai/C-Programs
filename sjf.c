#include<stdio.h>
void main()
{
	int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
	float avg_wt,avg_tat;
	printf("Enter number of processes:");
	scanf("%d",&n);

	printf("\n Enter burst time:\n");
	for(i=0;i<n;i++)
		{
			printf("p%d:",i+1);
			scanf("%d",&bt[i]);
			p[i]=i+1;
		}
	for(i=0;i<n;i++)
		{
			pos=i;
			for(j=j+i;j<n;j++)
				{
					if(bt[j]<bt[pos])
						pos=j;				
				}
			temp=bt[i];
			bt[i]=bt[pos];
			bt[pos]=temp;
			temp=p[i];
			p[i]=p[pos];
			p[pos]=temp;		
		}
	wt[0]=0;
	for(i=1;i<n;i++)
		{
					
		}
}
