#include "functions.h"
#include <stdexcept>

int factorial(int n){ 
    if(n<0) {
        throw std::invalid_argument( "received negative value" );       
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
