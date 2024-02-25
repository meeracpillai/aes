
/*
This program generates prime numbers using various algorithms. As Prime number generation is fundamental for RSA.
input: Integers 
return: prime numbers

*/

#include<iostream>
#include<vector>
#include<cmath>
#include <bitset>
using namespace std;

//Generate prime number untill n
vector<bool> prime_generator(unsigned long number) {
    unsigned long n = number;

    vector<bool> vec(n+1,true);
    vec[0]=vec[1]=false;
    for(unsigned long i=2; i<=n; i++){
       if (vec[i]==true && (long long)i * i <= n){
        for(unsigned long j=i*i; j<=n; j+=i ){
            vec[j]=false;
            
        }
       }

    }

    return  vec;
  



}


int main() {
    unsigned long n;
   
    std::cin>>n;
    std::vector <bool> result = prime_generator(n);
    for (unsigned long i =2; i<=n; i++) {
        if(result[i]==true){
            cout<< "\n"<<i;
        }
    }

    return 0;
}
