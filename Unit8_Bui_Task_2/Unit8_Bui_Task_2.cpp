/* Unit8_Bui_Task_2.cpp : This file contains the 'main' function.
First name : Daniel
Last name : Bui
Section : 2022 COSC 1436 57002
Txt editor : Visual Studio 2022
Dev - C++
Create a car struct. Then uses functions that will update car color and use new() for pointers and will print out the original then new allocated pointer.
*/

#include<iostream>
#include <string>
#include<iomanip>
using namespace std;

//create car struct
struct Car
{
	string make;
	string model;
	int    year;
	string color;

	void setColor(Car*);
	void clearCar(Car*);
};


//update the color to “GREEN” if the year is after 2010 or RED if 2010 or earlier. ???
void Car::setColor(Car* ptrC)
{
	if (ptrC->year <= 2010)
	{
		ptrC->color = "GREEN";
	}
	else {
		ptrC->color = "RED";
	}
}

void printCarChar(Car* ptrC)
{
	cout << "Here are the details for this car...";
	cout << "\nMake: " << ptrC->make << endl;
	cout << "\nModel: " << ptrC->model << endl;
	cout << "\nYear: " << ptrC->year << endl;
	cout << "\nColor: " << ptrC->color << endl << endl;
}


void Car::clearCar(Car *ptrC)
{
	cout << "Here are the details for this car...";
	cout << "\nMake: " << ptrC->make << endl;
	cout << "\nModel: " << ptrC->model << endl;
	cout << "\nYear: " << ptrC->year << endl;
	cout << "\nColor: " << ptrC->color << endl << endl;

	Car* p_clear = ptrC;
	new(p_clear) Car();
	cout << "Here are the details for this car...";
	cout << "\nMake: " << ptrC->make << endl;
	cout << "\nModel: " << ptrC->model << endl;
	cout << "\nYear: " << ptrC->year << endl;
	cout << "\nColor: " << ptrC->color << endl << endl;
}

int main()
{
	//initialize car struct w/out car.color
	Car car1 = { "BMW","325i",2011 };
	Car car2 = { "Volkswagen","GTI",2009 };
	Car car3 = { "Honda","Civic",2012 };

	//method that will update the color
	
	car1.setColor(&car1);
	car2.setColor(&car2);
	car3.setColor(&car3);
	
	/*
	//method that will print car information in struct
	printCarChar(&car1);
	printCarChar(&car2);
	printCarChar(&car3);
	*/
	
	//call new method and display both the original structure and the structure with the update
	car1.clearCar(&car1);
	car2.clearCar(&car2);
	car3.clearCar(&car3);
	
}