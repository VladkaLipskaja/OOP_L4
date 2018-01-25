#include "Source.h"
#include "Error.h"
#include <iostream>
using namespace std;
Vector::Vector(float x1 = 0, float y1 = 0, float z1 = 0) : x(x1), y(y1), z(z1) { cout << "Your vector is: {" << x << ", " << y << ", " << z << "}" << endl;};
void Vector::SetX(float x1) { x = x1; }
void Vector::SetY(float y1) { y = y1; }
void Vector::SetZ(float z1) { z = z1; }
Vector Vector::operator+(Vector t) {
	Vector temp;
	temp.x = x + t.x;
	temp.y = y + t.y;
	temp.z = z + t.z;
	return temp;
}
Vector Vector::operator+=(Vector t) {
	x = x + t.x;
	y = y + t.y;
	z = z + t.z;
	return *this;
}
Vector Vector::operator-(Vector t) {
	Vector temp;

	temp.x = x - t.x;
	temp.y = y - t.y;
	temp.z = z - t.z;
	return temp;
}
Vector Vector::operator-=(Vector t) {
	x = x - t.x;
	y = y - t.y;
	z = z - t.z;
	return *this;
}
Vector Vector::operator*=(Vector t) {
	x = x * t.x;
	y = y * t.y;
	z = z * t.z;
	return *this;
}
Vector Vector::operator*=(float t) {
	x = x * t;
	y = y * t;
	z = z * t;
	return *this;
}
Vector Vector::operator-() {
	Vector temp;
	temp.x = -x;
	temp.y = -y;
	temp.z = -z;
	return temp;
}
bool Vector::operator==(Vector t) {	if (t.x == x&&t.y == y&&t.z == z) return true;	else return false;}
bool Vector::operator!=(Vector t) { if (y*t.x/x == t.y&&z*t.x / x == t.z) return true;	else return false; }
Vector Vector::operator*(Vector t) {
	Vector temp;
	temp.x = x * t.x;
	temp.y = y * t.y;
	temp.z = z * t.z;
	return temp;
}
Vector Vector::operator*(float t) {
	Vector temp;
	temp.x = t * x;
	temp.y = t * y;
	temp.z = t * z;
	return temp;
}
Vector Vector::operator=(Vector t) {
	x = t.x;
	y = t.y;
	z = t.z;
	return *this;
}
void Vector::GetC() { cout << x << ", " << y << ", " << z << endl; }
