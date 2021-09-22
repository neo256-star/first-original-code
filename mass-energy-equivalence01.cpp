//
//Created by Nsquared on 26/8/2021 (D/M/Y)
//Changes on 22/09/2021
//

#include <iostream>

const double Sol{299792458}; //max speed of light in a vacuum (m/s)
double mass; //kg
double energy;//joules (i think)

double sq(double n){
	return n*n;
}

void calculate(){
	while(cin){
		if(cin == mass)
			std::cout << mass = energy / sq(Sol) << '\n';
		if(cin == energy )
			std::cout << energy = mass*sq(Sol) << '\n';
	}
}
int main(){
	try{
		calculate();
		return 0;
	}catch(std::exception& e){
        std::cerr << e.what() << '\n';
        return 1;
    }
    catch(...){
		std::cerr << "Error: maybe you inputted speed of light . if you did you shouldn't have it's a constant\n If not that, it's an unknown error\n";
        return 2;
	}
}
