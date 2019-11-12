#include <iostream>

int addition(int a, int b);

int subtraction(int a, int b);
    
int fibo(int N);
    

{
    int r;
    r=a-b;
    return r;
}

int main(void)
{
    int x=5,y=3,z;
    z=subtraction(7,2);
    std::cout<< "Ejercicio 1 " <<"\n";
    std::cout<< "The first result is " << &z <<"\n";
    std::cout<< "The second result is " << (subtraction(7,2)) <<"\n";
    std::cout<< "The third result is " << (subtraction(x,y)) <<"\n";
    z=4+subtraction(x,y);
    std::cout<< "The fourth result is " << &z <<"\n";
    
    int u,v,w;
    u=5;
    v=3;
    w=addition(x,y);
    std::cout<< "Ejercicio 2 "<<"\n";
    std::cout<< "The result is " <<w<<"\n";
    std::cout<< "The value of x is " <<u<<"\n";

    std::cout<< "Ejercicio 3 " <<"\n";
    std::cout<< "Fibonnacci de 8 es: " << fibo(8)<<"\n";
    
        
    return 0;
}


int addition(int a, int b)
{
    int r;
    r=a+b;
    a=r;
    return r;
}


int fibo(int N){
    int f;
    for(int i=0; i<N; i++){
    if(N==0){
        f=0;
    }
    else(N==1){
        f=1;
    }
    else{
        f = fibo(N-1)+fibo(N-2);
    }
    }
    return f;
}

