//Take a binary number and put 0 to 1 & 1 to 0 like 1's complement.
#include<iostream>
#include<string>
using namespace std;
void vice(string a){
for(int i=0; i<a.size(); i++){
    if(a[i]=='0')
    a[i]='1';
    else
        a[i]='0';

}
cout<<a;
}
int main(){
string binarynum;
cout<<"Enter any binary number :"<<endl;
cin>>binarynum;
vice(binarynum);
return 0;
}
