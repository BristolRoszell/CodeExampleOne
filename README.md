# CodeExampleOne
This code is a simple C++ program that gives mathematical equations based on what shape you input. It starts out with a comment statement. This comment statement was the problem
I was trying to solve when making this code. To sum it down, we had to write a code that gets an input from the user about which shape type has been inputed, and does equations
for that shaped to find area, circumference, peremiter, etc depending on the shape. The problem only asked solve for a circle or a rectangle, but I took it upon myself to solve
equations for a square and a sphere as well.

I also took it upon myself to output to an output file rather than doing everything in a cmd file. I first set up my libraries, these libraries were <iostream>, <iomanip>,
<cmath>, <string>, and <fstream>. I then set up my variables as seen below:

  	const double PI = 3.1416;
		double radius;
		double length;
		double width;
		string shape;
 
  I then set up my basics for exporting to an external document and named the document. After all of this setup was done, it was time for the base of the code. I started with
  asking the user to submit the shape type that they wanted to do math for. After they submitted the shape, the program decides which shape the user has input through if, else
  if, and else statements. If the user inputs the term "rectangle", the program will first ask the user for the width of the rectangle. The program then asks for the length of the
  rectangle. Using the inputs, the program then does math to calculate Perimeter and area and outputs it in command prompt and an output file.
  
  If the user inputs the term "circle", the program asks for the radius of the circle. The program receives the input and calculates the area and circumference of the circle using
  the PI variable set up earlier. We also call upon the <cmath> library to use "POW" or power. The program outputs the circumference and area to a command prompt and output file.
  
  If the user inputs the term "sphere", the program asks for the radius of the sphere. It uses this information to do formulas using libraries to compute the Surface Area and
  Volume of the sphere. The program then outputs this to a command prompt and output file.
  
  If the user inputs the term "square", the program then asks for a length of a side. The program then does equations like the last examples to figure out the area and perimeter 
  of the square. The program then outputs this to a command prompt and output file.
  
  If the user inputs any other shape than the four mentioned above, the program will output in command prompt and output file, "The program does not handle " and the shape
  received from the user.
  
  The program then closes the output file and is finished.
  
