//khaled sayed ahmed
//202106591
#include <iostream>
using namespace std;

int main(){
    float Q1,Q2,Q3,Q4,X,Y;

    cin>>X>>Y;
    if(X==0 && Y==0){
        cout<<"Origem";
    }
    else if (X!=0 && Y==0){
        cout<<"Eixo X";
    }
    else if (X==0 && Y!=0){
        cout<<"Eixo Y";
    }
    else if (X>0 && Y>0){
        cout<<"Q1";
    }
    else if (X<0 && Y>0){
        cout<<"Q2";
    }
    else if (X<0 && Y<0) {
        cout<<"Q3";
    }
    else if (X>0 && Y<0){
        cout<<"Q4";
    }

}
