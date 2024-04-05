#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    Car();
    Car(int,string,string);
    int GetYear() const;
    string GetMake() const;
    string GetModel() const;
    void SetYear();
    void SetMake();
    void SetModel();
    Car Nissan();
private:
    int year;
    string make;
    string model;
};
