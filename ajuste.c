#include<stdio.h>
#include<math.h>

#define t 10

main()
{
	FILE *in;
	double  X, Y, x = 0.0, y = 0.0, xx = 0.0, xy = 0.0, a0, a1, vx[t], vy[t];
	int	i=0;
	
	
	in=fopen("ajdados.dat", "r");
	
	while(fscanf(in, "%lf\t%lf\n", &X, &Y) != EOF)
	{
		x+=X;
		y+=Y;
		
		xy+=(X*Y);
		
		xx+=pow(X,2);
		
		vx[i] = X;
		vy[i] = Y;
		
		i++;
	}
	
	
	a1=((t*xy) - (x*y)) / ((t*xx) - (pow(x,2)));
	a0=((xx*y) - (xy*x)) / ((t*xx) - (pow(x,2)));
	
	
	printf("\nA1 = %lf\nA0 = %lf\n",a1,a0);
	
	
	fclose(in);
	
	
	in=fopen("ajdados.dat", "w");
	
	
	for(i=0; i < t; i++)

		fprintf(in,"%lf\t%lf\t%lf\n",vx[i],vy[i],((a0 * vx[i]) + a1));
		
	
	fclose(in);
	
}
	
