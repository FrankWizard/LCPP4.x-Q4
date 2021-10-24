#include <iostream>
void calcAndPrint(double tHeight, int time);

int main()
{
    double tHeight;
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> tHeight;

    calcAndPrint(tHeight, 0);
    calcAndPrint(tHeight, 1);
    calcAndPrint(tHeight, 2);
    calcAndPrint(tHeight, 3);
    calcAndPrint(tHeight, 4);
    calcAndPrint(tHeight, 5);
    system("pause");

}
