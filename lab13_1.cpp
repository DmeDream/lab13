#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double data[],int Num,double result[]){
    double sumx = 0,sumxpow2 = 0,GM = 1,HM = 0, Max = 0, Min = 100;
    for(int i=0;i < Num ;i++)
    result[0] += data[i];
    result[0] = result[0]/Num ;
    for(int i=0;i < Num ;i++){
    sumxpow2 += pow(data[i],2);
    sumx += data[i];
    GM *= data[i];
    HM += 1.0/data[i];
        if (data[i] > Max)
            Max = data[i];
        if (data[i] < Min)
            Min = data[i];
    }
    result[1] = sqrt((sumxpow2-(Num*(pow(result[0],2))))/Num);
    result[2] = pow(GM,(1.0/Num));
    result[3] = (Num/HM);
    result[4] = Max ;
    result[5] = Min ;
}