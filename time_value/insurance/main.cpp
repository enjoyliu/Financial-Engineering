//计算一款保险的净现值

#include <iostream>
#include "cmath"
using namespace std;

int main() {

    double k,years;
    double cf;
    double sum;
    double costs;
    double pv= 0.0;
   while(1){

        cout<<"input:k years"<<endl;
        cin>>k>>years;
        sum = 0;
        costs = 0;

        //扣费方式
        for(int t=1;t<=years;t++){
            if(t<=20){
                costs = costs - 900;
                if(t%3==0)
                    cf = 800;
            }
            else if(t%3==0)
                cf=800;
            sum = sum + cf/(pow((1+k),t));
                cf = 0;
        }

        pv = sum +costs;

    cout<<"your PV is "<<pv<<endl;
    cout<<endl;
   }

}