//khaled sayed ahmed
//202106591

#include <iostream>

using namespace std;

int main()
{
   float a,b,c,bigger,smallest,mid;
   cin>>a>>b>>c;
   bigger=max(a,max(b,c));
   smallest=min(a,min(b,c));
   mid=(a+b+c)-(bigger+smallest);
   cout<<smallest<<endl;
   cout<<mid<<endl;
   cout<<bigger<<endl<<endl;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
    return 0;
}

