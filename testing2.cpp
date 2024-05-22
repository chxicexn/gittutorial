#include <iostream>
#include <string>


using namespace std;

int main(){
    string name1, name2, name3, name4;
    float scoreone, scoretwo, scorethree, scorefour;

    cout<<"NAME: CHOICE-EDAH EFETOBORE CHOICE"<<endl;
    cout<<"MATRIC NUMBER: 21/8340"<<endl;
    cout<<"LEVEL: 200"<<endl;

    cout<<"ENTER THE NAME OF THE REGISTERED STUDENT: "; cin >> name1;
    cout<<"input the score of the above student inputted(%):"; cin >> scoreone;

        if(scoreone <= 20){
            scoreone += 5;
        }

    cout<<"ENTER THE NAME OF THE REGISTERED STUDENT: "; cin >> name2;
    cout<<"input the score of the above student inputted(%):"; cin >> scoretwo;

       if(scoretwo <= 20){
        scoretwo += 5;
       }  

    cout<<"ENTER THE NAME OF THE REGISTERED STUDENT: "; cin >> name3;
    cout<<"input the score of the above student inputted(%):"; cin >> scorethree;

       if(scorethree <= 20){
        scorethree += 5;
       }  
}cout<<"ENTER THE NAME OF THE REGISTERED STUDENT: "; cin >> name4;
    cout<<"input the score of the above student inputted(%):"; cin >> scorefour;

       if(scorefour <= 20){
        scoretwo += 5;
       }  

    cout<<name1 << "scored" << scoreone << "%\n";
    cout<<name2 << "scored" << scoretwo << "%\n";
    cout<<name3 << "scored" << scorethree << "%\n";
    cout<<name4 << "scored" << scorefour << "%"<<endl;

