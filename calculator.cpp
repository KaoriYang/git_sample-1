#include <iostream>

using namespace std;


class CCAL{
    public:
        void set(float a,float b);
        float add();
        float minus();
        float multi();
        float div();

    private:
        float x;
        float y;
}; 

void CCAL::set(float a, float b){
    x=a;
    y=b;
}

float CCAL::add(){
    return (x+y);
}

float CCAL::minus(){
    return (x-y);
}

float CCAL::multi(){
    return (x*y);
}

float CCAL::div(){
    return (x/y);
}

int main(){
    CCAL exm;
    float a;
    float b;
    cout << "Input the first number: " << endl;
    cin >> a;
    cout << "Input the second number: " << endl;
    cin >> b;
    exm.set(a,b);
    cout << "addition = " << exm.add() << endl;
    cout << "substraction = " << exm.minus() << endl;
    cout << "multiplication = " << exm.multi() << endl;
    cout << "division = " << exm.div() << endl;
    return 0;
}