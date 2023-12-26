#include <iostream>
#include <math.h>

void f();

int main(int argc, char* argv[]){
	
	f();
	return 0;
}

void f(){
	
	int i = 0;
	double fx0, fx1, fx, shaq, pogr, max_pogr = 0.0, y_sp, h = 0.1;
	double mas_y[11], mas_ys[11];
	
	fx0 = 3.0;
	
	for(shaq = 0.0; shaq < 1; shaq += 0.1){
	mas_y[i] = fx0; i++;
	fx = exp(shaq) + shaq*shaq + 2.0*shaq + 2.0;
	pogr = fabs(fx0 - fx)/ fx*100.0;
	if(max_pogr < pogr)max_pogr = pogr;
	std::cout << "x = " << shaq << " inter f(x) = " << fx0 << " f(x) = " << fx << " pogr = " << pogr << std::endl;
		fx1 = fx0 + (fx0 - shaq*shaq)*0.1;
		fx0 = fx1;
	}
	std::cout << "max_pogr = " << max_pogr << std::endl;
	
	std::cout << std::endl;
	
	//for(i = 0; i < 11; i++)std::cout << "mas_y(x) = " << mas_y[i] << std::endl;
	
	mas_ys[0] = 3; shaq = 0.0; max_pogr = 0.0;
	for(i = 0; i < 10; i++){
		fx = exp(shaq) + shaq*shaq + 2.0*shaq + 2.0;
		std::cout << "x = " << shaq << " inter f(x) = " << mas_ys[i] << " f(x) = " << fx << " pogr = " << pogr << std::endl;
		pogr = fabs(mas_ys[i] - fx)/ fx*100.0;
		if(max_pogr < pogr)max_pogr = pogr;
		y_sp = mas_y[i] + h*(mas_y[i] - shaq*shaq);
		mas_ys[i + 1] = mas_ys[i] + (h/2.0)*((mas_y[i] - shaq*shaq) + (y_sp - shaq*shaq));
		shaq += 0.1; 
	}
	std::cout << "max_pogr = " << max_pogr << std::endl;	
	
}
