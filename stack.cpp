#include<iostream>
#include<vector>
using namespace std;
int main(){
    stack <int > s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}
