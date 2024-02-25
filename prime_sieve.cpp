
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

//Generate prime number untill given the odd
vector<bool> prime_generator(vector<bool> odd_sieve) {

    vector<bool> vec = odd_sieve;
    unsigned long n = vec.size();

    for(unsigned long i=2; i<=n; i++){
       if (vec[i]==true && (long long)i * i <= n){
        for(unsigned long j=i*i; j<=n; j+=i ){
            vec[j]=false;
            
        }
       }

    }

    return  vec;
  



}
//odd generator
vector<bool> odd_generator(unsigned long number) {
    vector<bool> vec(number+1,true);
    vec[0]=vec[1]=false;
    for (unsigned long i = 2; i<=number; i++) {
        if(i%2==0){
            vec[i]=false;
        }

    }
   vector<bool> sieve = prime_generator(vec);
    
return sieve;
}





int main() {
    unsigned long n;
   cin>>n;
    std::vector<bool> result = odd_generator(n) ;
    for (unsigned long i =2; i<=n; i++) {
        if(result[i]==true){
            cout<< "\n"<<i;
        }
    }

    return 0;
}
