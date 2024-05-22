#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Triangle{
    private:
        float base, height;

    public:
        //Constructor
        Triangle(float b, float h): base(b), height(h) {}

        //Method to calculate the area
        float calculateArea(){
            return 0.5 * base * height;
        }
};

int main(){
    float base, height, area;
    string name;
    int matric, level;

    //My info
    cout<<"Enter your name:";
    getline (cin, name);
    cout<<"\n Enter your level";
    cin>> level;

    //assigning values to the variables
    cout<<"\n Enter the base of the triangle:";
    cin>> base;
    cout<<"\n Enter the height of the triangle:";
    cin>> height;

    //Create an instance of the triangle class
    Triangle triangle(base, height);

    //Calculate and display the area
    area = triangle.calculateArea();

    cout<<"\n NAME: "<<endl;
    cout<<"\n MATRIC NUMBER: "<< matric<<endl;
    cout<<"\n LEVEL: "<<level<<"\n"<<endl;

    cout<<"The area of the triangle is" << area << endl;

    return 0;
}