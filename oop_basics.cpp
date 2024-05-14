#include<bits/stdc++.h>
using namespace std;
class Employee{
string Name;
string Company;
int Age;
public:
Employee(){
    cin >> Name >> Company >> Age;
}
void introduce(){
    cout << "Name Of The Employee: " << Name << '\n';
    cout << "Name Of The Employee's Company: " << Company << '\n';
    cout << "Age: " << Age << '\n';
}
};
int main(){
    Employee employee1;
    employee1.introduce();
}