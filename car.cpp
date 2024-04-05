#include <iostream>
#include <string>
#include "car.h"
using namespace std;

int Car::GetYear() const {
    return year;
}
string Car::GetMake() const {
    return make;
}
string Car::GetModel() const {
    return model;
}
void Car::SetMake() {
    do {
        cout<<"Enter Make Name"<<endl;
        cin>>make;
        if (make==""){
            cout<<"Invalid Make"<<endl;
        }
    }
    while (make=="");
}
void Car::SetYear() {
    do {
        cout<<"Enter build Year"<<endl;
        cin>>year;
        if (year<0){
            cout<<"Invalid Year"<<endl;
        }
    }
    while (year<0);
}
void Car::SetModel() {
    do {
        cout<<"Enter Model Name"<<endl;
        cin>>model;
        if (model==""){
            cout<<"Invalid Model"<<endl;
        }
    }
    while (model=="");
}

Car::Car() {
    SetYear();
    SetModel();
    SetMake();
}
Car::Car(int x, string y, string z) {
    // point:
    /*
     * If I use cin for setter functions then it may not be possible to use a constructor that has parameters.
     */
}

Car Car::Nissan() {
    cout<<"printing the function call"<<endl;
    return Car();
}


