#include <iostream>
#include <string>
#include <cmath>

using std::cout; using std::cin; using std::string;

namespace area
{
    double squareArea(double length, double width)
    {
        return length * width;
    }
    
    double rectangleArea(double length, double width)
    {
        return length * width;
    }

    double triangleArea(double base, double height)
    {
        return 0.5 * base * height;
    }

    double circleArea(double radius)
    {
        return 3.14 * std::pow(radius, 2); // c++ has no pi?
    }
}

void menu();

void square()
{
    double inputLength{};
    double inputWidth{};

    cout << "\nlength? \n";
    cin >> inputLength;

    cout << "\nwidth? \n";
    cin >> inputWidth;

    cout << "area: \n";
    cout << area::squareArea(inputLength, inputWidth) << '\n';

    menu();
}

void rectangle()
{
    double inputLength{};
    double inputWidth{};

    cout << "\nlength? \n";
    cin >> inputLength;

    cout << "\nwidth? \n";
    cin >> inputWidth;

    cout << "area: \n";
    cout << area::rectangleArea(inputLength, inputWidth) << '\n';

    menu();
}

void triangle()
{
    double inputBase{};
    double inputHeight{};

    cout << "\nbase? \n";
    cin >> inputBase;

    cout << "\nheight? \n";
    cin >> inputHeight;

    cout << "area: \n";
    cout << area::rectangleArea(inputBase, inputHeight) << '\n';

    menu();
}

void circle()
{
    double inputRadius{};

    cout << "\nradius? \n";
    cin >> inputRadius;

    cout << "area: \n";
    cout << area::circleArea(inputRadius) << '\n';

    menu();
}

void menu()
{
    string shapeResponse{};

    cout << "\nshape? \n";
    cin >> shapeResponse; // using cin because the user *should* only be inputting a single word

    if (shapeResponse == "square")
    {
        square();
    }
    else if (shapeResponse == "rectangle")
    {
        rectangle();
    }
    else if (shapeResponse == "triangle")
    {
        triangle();
    }
    else if (shapeResponse == "circle")
    {
        circle();
    }
    else
    {
        cout << "input 'square', 'rectangle', 'triangle', or 'circle' \n";
        cout << "if confused, use your brain \n";

        menu();
    }
}

int main()
{
    cout << "area calculator\n";
    cout << "written by chapel1337\n";

    menu();
}