#include <iostream>
using namespace std;

void display () {
    static int x;
    int  y=0;
    x++;
    y++;
    cout<< x <<endl;
    cout<<y<<endl;
}
int main (){
    display();
    display();
    display();
    return 0;
}