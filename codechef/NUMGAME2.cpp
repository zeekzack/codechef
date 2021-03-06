
#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#define sqr(x) (x)*(x)
using namespace std;
bool isPrime(int n){
    if(n == 2 || n==3 || n==5 || n==7 )
        return true;

    if(n % 2==0 || n%3==0 || n%5==0 || n%7==0 )
        return false;
    for(int i=11;i<sqrt(n);i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int tCases;
    scanf("%d",&tCases);
    for(int t=0;t<tCases;t++){
        int n;
        scanf("%d",&n);
        if(n==1 || (n-1)%4==0){
            printf("ALICE\n");
        }else{
            printf("BOB\n");
        }
    }
    return 0;
}
