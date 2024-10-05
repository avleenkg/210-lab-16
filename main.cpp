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
    Color()                     { rhues = 0; bhues = 0; ghues = 0; } //default constructor
    Color(int r)                { rhues = r; bhues = 0; ghues = 0; } //partial constructor 1
    Color(int r, int b)         { rhues = r; bhues = b; ghues = 0; } //partial constructor 1
    Color(int r, int b, int g)  { rhues = r; bhues = b; ghues = g; } //full parameter constructor

    //setters and getters
    int getred() const      { return rhues; }
    int getblue() const     { return bhues; }
    int getgreen() const    { return ghues; }
    void setred(int r)      { rhues = r; }   
    void setblue(int b)     { bhues = b; }
    void setgreen(int g)    { ghues = g; }

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

    //new objects
    Color c4;
    c4.print();

    Color c5(30);
    c5.print();

    Color c6(230, 19);
    c6.print();

    Color c7(101, 3, 47);
    c7.print();
}