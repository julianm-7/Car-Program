#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    int GetYear() const;
    string GetMake() const;
    string GetModel() const;
    void SetYear();
    void SetMake();
private:
    int year;
    string make;
    string model;
};

int Car::GetYear() const {
    return year;
}
string Car::GetMake() const {
    return make;
}
void Car::SetMake() {
    cin>>make;
}
void Car::SetYear() {
    cin>>year;
}