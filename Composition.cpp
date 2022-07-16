#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
using std::cout;

#define pi 3.14159

class LineSegment
{
protected :
	double length;
public:
	double get_len() { return length; }
	void   set_len(double L) { length = L; }
};
class Circle
{
public :
	Circle(LineSegment& l) : radius_(l){}
	double setRadius(LineSegment& l) { radius_ = l; }
	double Area()
	{
		return pi * pow(radius_.get_len() , 2);
	}
protected:
	LineSegment& radius_ ;
};
int main()
{
	
		LineSegment radius;
		radius.set_len(3);
		Circle circle(radius);
		assert(int(circle.Area()) == 28);
		std::cout << circle.Area() << std::endl;

}
