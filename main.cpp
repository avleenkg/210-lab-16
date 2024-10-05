//Avleen Gill - 210 Lab 16
//modified lab 14

#include <iostream>
#include <iomanip>
using namespace std;

const int W = 15;

class Color {
    private:
    int rhues;
    int bhues;
    int ghues;

    public:
    int getred() const      { return rhues; }
    int getblue() const     { return bhues; }
    int getgreen() const    { return ghues; }
    void setred(int r)      { rhues = r; }   
    void setblue(int b)      { bhues = b; }
    void setgreen(int g)      { ghues = g; }

    void print() {
        cout << "------Color hues:------\n";
        cout << setw(15) << "Red hues: " << rhues << endl;
        cout << setw(15) << "Blue hues: " << bhues << endl;
        cout << setw(15) << "Green hues: " << ghues << endl << endl;;
    }
};

int main() {
    Color c1;
    c1.setred(255);
    c1.setblue(0);
    c1.setblue(0);
    c1.print();

    Color c2;
    c2.setred(115);
    c2.setblue(20);
    c2.setgreen(255);
    c2.print();
    
    Color c3;
    c3.setred(0);
    c3.setblue(255);
    c3.setgreen(100);
    c3.print();

}