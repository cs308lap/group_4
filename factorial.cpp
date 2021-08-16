#include "functions.h"
#include <stdexcept>
#include <bits/stdc++.h>
// hi hello how are u
// i am not fine
// bhad mai ja

int factorial(int n){ 
    if(n<0) {
        throw std::invalid_argument( "received negative value" );       
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
