#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,x1,x2,d;
	a=2;
	b=10;
	c=4;
	d=pow(b,2)-4*a*c;
	x1=-b+sqrt(d)/(2*a);
	x2=-b-sqrt(d)/(2*a);
	
	
	
	printf("x1=%lf\n",x1);
	printf("x2=%lf\n",x2);
	printf("d==%lf\n",d);
	
	
	
	return 0;
}
