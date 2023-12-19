#include <iostream>
#include <math.h>
using namespace std;
class rectangle{
public:
    int a;
    int b;
    void pole();
    void przekatna();
};

void rectangle::pole(){
    cout<<a*b<<endl;
}

void rectangle::przekatna(){
    cout<<sqrt((a*a)+(b*b));
}
int main() {
    rectangle kwadrat;
    cin>>kwadrat.a;
    cin>>kwadrat.b;
    kwadrat.pole();
    kwadrat.przekatna();
    return 0;
}



//Napisz klasę rectangle, która będzie miała pola a i b oraz metody pozwalające na obliczanie pola i przekątnej tego prostokąta.
// W funkcji main stwórz nowy obiekt, poproś użytkownika o podanie a i b, a następnie wywołaj obie metody i wynik obliczeń wydrukuj
// na terminalu.