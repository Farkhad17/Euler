#include <iostream>
#include <math.h>

double f(double x);
void diff();

int main(int argc, char* argv[]){
	int i, j, n = 11;
	double h = 0.1, alpha = 10.0, x = 0.0;
	double u[n][n];
	
	for(j = 0; j < n; j++){
		u[0][j] = 0.0;
		u[1][j] = 2*u[0][j] + alpha*pow(h, 2)*pow(u[0][j], 3) - pow(h, 2)*f(x);	
	}
	
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n; j++){
			u[i + 1][j] = 2*u[i][j] - u[i - 1][j] + alpha*pow(h, 2)*pow(u[i][j], 3) - pow(h, 2)*f(x);
			x += h;
		}
	}
	for(j = 0; j < n; j++){
		u[n][j] = 0.0;
	}
	
	std::cout << "x = " << h*i << u[x]	
	return 0;
}

void diff(){
	int i, n;
	double ddu, h;
	double mas_un[n];
	n = 11;
	h = 0.1;
	ddu = (f(x + h) - 2*f(x) + f(x - h))/(h*h);
	mas_un[0] = mas_un[11] = 0;
	for(i = 0; i < n - 1; i++){
		mas_un[i + 1] = f(i) 
	}
}
