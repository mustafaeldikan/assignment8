#include <iostream>
using namespace std;
//MUSTAFA ELDIKAN STUDENT NO : 1306210108 ASSIGNMENT #8  29.12.2021
class Box
{
private:
	int heigh;
	int width;
	int length;
public:
	Box(){
		cout << "Box is created by default constructor " << endl;
	} 
	
	Box(int h1, int w1, int l1) {

		setHeigh(h1);
		setWidth(w1);
		setLength(l1);
		cout << "Box is created by constructer/n volume of the box is :" << h1 * w1 * l1 << endl;
		}
	~Box() {
		cout << "Box is destroyed by destructer" << endl;
	}

	void setHeigh(int h) {
		heigh = h;
	}
	int getHeigh() {
		return heigh;
	}
	void setWidth(int w) {
		width = w;
	}
	int getWidth() {
		return width;
	}
	void setLength(int l) {
		length = l;
	}
	int getLength() {
		return length;
	}
	int getVolume() {
		return heigh * width * length;
	}

};
int main()
{
	
	int width, heigh, length;

	for (int counter = 0; counter < 10; ++counter)
	{
		cout << "Please enter heigh & width & length ..." << endl;
		cin >> width >> heigh>> length;
		cout << "\nBox #" << counter + 1 << endl;
		if (counter % 2 == 0)
		{
			Box box(width, heigh, length);
		}
		else 
		{
			Box box;
			box.setWidth(width);
			box.setHeigh(heigh);
			box.setLength(length);
			cout << "Volume of the box is : " << box.getVolume() << endl;
		}
		cout << "-------------------------------\n";
	}


}