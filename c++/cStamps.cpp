#include<iostream>
using namespace std;
int main()
{
    int n,mem,sum1=0,sum;
    cin >> n ;

    for(int i =0 ; i< n;i++)
    {
        cin >> mem;
        sum1 = sum1 + mem;
    }
    sum = n*(n+1)/2;
    if(sum == sum1){
        cout << "YES"<< endl;
    }else{
        cout << "NO"<< endl;
    }

}