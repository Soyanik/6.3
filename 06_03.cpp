#include <stdio.h>
#include <math.h>
int main () {
	int const N=40;
	double f1=1;
	double f2=1;
	double temp=0;
	int i;
		double v[N];
		double a[N-1];
		double c[N-2];
		v[0]=f1;
		v[1]=f2;
		a[0]=1;
		a[1]=f2/f1;
		c[0]=a[1]-a[0];
		c[1]=1;
			for (i=2;i<N;i++){
				temp=f2;
				f2=f1+f2;
				f1=temp;
				v[i]=f2;
				a[i]=f2/temp;
				c[i]=a[i]-a[i-1];
			}
			for (i=0; i<N-1; i++){
			printf("c[%d] = %5.2lf\n",i,c[i]);
		}
	return 0;
}
