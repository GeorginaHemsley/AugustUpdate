#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main()
{
    cout << "Enter the width of the room: ";
    int RoomWidth {0};
    cin >> RoomWidth;
    
    cout << "Enter the length of the room: ";
    int RoomLength {0};
    cin >> RoomLength;
    
    cout << "The are of the room is " << RoomWidth * RoomLength << " square feet" << endl;
    
 return 0;   
}

