#include<iostream>
#include<String>
using namespace std;
bool isPallindrome(string &s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return false;
        else return true;
    }
}
int main(){
    string s="shiva";

   bool valid= isPallindrome(s);
    cout<<(valid?"True":"False");
}