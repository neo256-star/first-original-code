//
//Created by Nsquared on 26/8/2021 (D/M/Y)
//

#include <iostream>

const double Sol{299792458}; //speed of light in a vacuum (m/s)
double mass; //kg
double energy;//joules (i think)

double square(double n){
	return n*n;
}

void calculate(){
	while(cin){
		if(cin == mass)
			std::cout << mass = energy / square(Sol) << '\n';
		if(cin == energy )
			std::cout << energy = mass*square(Sol) << '\n';
	}
}
int main(){
	try{
		calculate();
		return 0;
	}catch(...){
		std::cerr << "Error: maybe you inputted speed of light . if you did you shouldn't have it's a constant\n "
	}
}
