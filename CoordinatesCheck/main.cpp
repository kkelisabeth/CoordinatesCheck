/*
* Creator:    Kozlova Elizabeth Paula
*
* Title:      Coordinates Check
*
* Description:
*             This program checks whether the entered point is in the rectangle centered at (0,0) or not
*/

#include <iostream>
using namespace std;

int main()
{
	float width, height, w, h, x, y;

	cout << "Please, enter width of the rectangle centered at (0,0): ";
	cin >> width;
	if (width > 0)
	{
		w = width / 2;
		cout << "Please, enter height of the rectangle centered at (0,0): ";
		cin >> height;
		if (height > 0)
		{
			h = height / 2;
			cout << "Please, enter the two coordinates of the point: ";
			cin >> x;
			cin >> y;

			if ((x <= w) && (y <= h))
				cout << "Point (" << x << ", " << y << ") is in the rectangle." << endl;
			else
				cout << "Point (" << x << ", " << y << ") is not in the rectangle." << endl;
		}
		else
			cout << "Sorry, you entered an invalid value for the height. Please, restart the program and reenter the value." << endl;
	}
	else
		cout << "Sorry, you entered an invalid value for the width. Please, restart the program and reenter the value." << endl;
	return 0;
}