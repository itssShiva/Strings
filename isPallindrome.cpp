#include<iostream>
#include<String>
using namespace std;
void reverseString(string &k){
    int n=k.size();
    for(int i=0;i<n/2;i++){
       swap(k[i],k[n-i-1]);
    }
}

bool isPallindrome(string s,string k){
    if(k==s)  return true;
        else return false;
}
int main(){
    string s="madam";
    string original=s;
    reverseString(s);
   bool valid= isPallindrome(original,s);
    cout<<(valid?"True":"False");
}