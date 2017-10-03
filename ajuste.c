#include<stdio.h>
#include<malloc.h>

#define t 10

int main(int qarg, char *arq[])
{
	FILE *in;
	double x[t], y[t]
	int	i=0;
	
	in=fopen(arq[1], "r");
	
	
	while(fscanf(in,"%lf\t%lf\n",&x[i],&y[i]) != EOF)
	{
		i++;
	}
	
	
}
	
	
