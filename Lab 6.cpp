/* The statements in the program (which is in handout  Download handout) are in incorrect order.
 Rearrange the statements and write your program in a separate page so that your program prompt the user to input the shape type 
 (rectangle, or circle) and the appropriate dimension of the shape. The program then outputs the following information about the shape:
  For a rectangle, it outputs the area and perimeter; for a circle, it outputs the area and circumference. After rearranging the statements,
   your program should be properly indented.

Name: Bristol Roszell
Date: 9/23/21
*/

//libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;
int main(){
	
	//setup variables
		const double PI = 3.1416;
		double radius;
		double length;
		double width;
		string shape;
		
		ofstream outFile;
		outFile.open ("lab6.txt");
	
	// get shape type from user
		cout << "Enter the shape type: (rectangle, circle, square, sphere)";
		cin >> shape;
		cout << endl;
			//run this if the shape is a rectangle										
		cout << fixed << showpoint << setprecision(2);
		if (shape == "rectangle") {
		
			//this is asking for width
			cout << "Enter the width of the rectangle: ";
			cin >> width;
			cout << endl;
		//this is asking for length
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << endl;
		
			cout << "Perimeter of the rectangle = " << 2 * (length + width) << endl;
			outFile << "Perimeter of the rectangle = " << 2 * (length + width) << endl;
			cout << "Area of the rectangle = " << length * width << endl;
			outFile << "Area of the rectangle = " << length * width << endl;
		}
		
		
	
	
	//run this if circle
		else if (shape == "circle"){
	
			//get radius for circle
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			cout << endl;
			//math for both equations
			cout << "Area of the circle = " << PI * pow(radius, 2.0) << endl;
			outFile << "Area of the circle = " << PI * pow(radius, 2.0) << endl;
			
			cout << "Circumference of the circle = " << 2 * PI * radius << endl;
			outFile << "Circumference of the circle = " << 2 * PI * radius << endl;
		
	}
	
		else if (shape == "sphere"){
	
			//get radius for sphere
			cout << "Enter the radius of the sphere: ";
			cin >> radius;
			cout << endl;
			
			//math for both equations
			cout << "Surface area of the sphere = " << 4* PI * pow(radius, 2.0) << endl;
			outFile << "Surface area of the sphere = " << 4* PI * pow(radius, 2.0) << endl;
			
			cout << "Volume of the sphere = " << (4/3.0) * PI * pow(radius, 3.0) << endl;
			outFile << "Volume of the sphere = " << (4/3.0) * PI * pow(radius, 3.0) << endl;
	}
	
		else if (shape == "square"){
	
			//get length for square
			cout << "Enter the length of the square: ";
			cin >> length;
			cout << endl;
			
			//math for both equations
			cout << "Area of square = " << pow(length, 2.0) << endl;
			outFile << "Area of square = " << pow(length, 2.0) << endl;
			
			cout << "Perimeter of square = " << (4.0 * length) << endl;
			outFile << "Perimeter of square = " << (4.0 * length) << endl;

	}
		else{
			//for if the shape is not compatible with our program
			cout << "The program does not handle " << shape << endl;
			outFile << "The program does not handle " << shape << endl;
	}


	outFile.close();

	return 0;	
}

