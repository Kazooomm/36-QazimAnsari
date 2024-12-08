/*
  Roll No.: 36
  Student Name: Mohd Qazim Ansari
  Program Title: WAP to design a menu driven area calculator of shapes.

  Task Given By:
    - Roll No. of Assignee: 1
    - Assignee Name: Rehan Mhate
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
float areaOfTriangle(float base, float height);
float areaOfSquare(float side);
float areaOfCircle(float radius);
float areaOfPolygon(int sides, float sideLength);
float areaOfRectangle(float length, float width);

int main() {
    int choice;
    float base, height, side, radius, length, width, sideLength;
    int sides;

    do {
        // Display menu
        printf("\nArea Calculator Menu\n");
        printf("1. Triangle\n");
        printf("2. Square\n");
        printf("3. Circle\n");
        printf("4. Polygon\n");
        printf("5. Rectangle\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Area of Triangle
                printf("Enter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                printf("Area of Triangle = %.2f\n", areaOfTriangle(base, height));
                break;

            case 2: // Area of Square
                printf("Enter the side of the square: ");
                scanf("%f", &side);
                printf("Area of Square = %.2f\n", areaOfSquare(side));
                break;

            case 3: // Area of Circle
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                printf("Area of Circle = %.2f\n", areaOfCircle(radius));
                break;

            case 4: // Area of Polygon
                printf("Enter the number of sides of the polygon: ");
                scanf("%d", &sides);
                printf("Enter the side length of the polygon: ");
                scanf("%f", &sideLength);
                printf("Area of Polygon = %.2f\n", areaOfPolygon(sides, sideLength));
                break;

            case 5: // Area of Rectangle
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                printf("Area of Rectangle = %.2f\n", areaOfRectangle(length, width));
                break;

            case 6: // Exit
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6); // Loop until the user chooses to exit

    return 0;
}

// Function to calculate the area of a triangle
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a square
float areaOfSquare(float side) {
    return side * side;
}

// Function to calculate the area of a circle
float areaOfCircle(float radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a polygon (regular)
float areaOfPolygon(int sides, float sideLength) {
    if (sides < 3) {
        printf("A polygon must have at least 3 sides!\n");
        return 0.0;
    }
    // Formula for area of a regular polygon: (n * s^2) / (4 * tan(PI / n))
    return (sides * sideLength * sideLength) / (4 * tan(PI / sides));
}

// Function to calculate the area of a rectangle
float areaOfRectangle(float length, float width) {
    return length * width;
}

/*OUTPUT-
Area Calculator Menu
1. Triangle
2. Square
3. Circle
4. Polygon
5. Rectangle
6. Exit
Enter your choice (1-6): 1
Enter the base of the triangle: 10
Enter the height of the triangle: 15
Area of Triangle = 75.00

Area Calculator Menu
1. Triangle
2. Square
3. Circle
4. Polygon
5. Rectangle
6. Exit
Enter your choice (1-6): 2
Enter the side of the square: 5
Area of Square = 25.00

Area Calculator Menu
1. Triangle
2. Square
3. Circle
4. Polygon
5. Rectangle
6. Exit
Enter your choice (1-6): 3
Enter the radius of the circle: 20
Area of Circle = 1256.64

Area Calculator Menu
1. Triangle
2. Square
3. Circle
4. Polygon
5. Rectangle
6. Exit
Enter your choice (1-6): 4
Enter the number of sides of the polygon: 6
Enter the side length of the polygon: 10
Area of Polygon = 259.81

Area Calculator Menu
1. Triangle
2. Square
3. Circle
4. Polygon
5. Rectangle
6. Exit
Enter your choice (1-6): 5
Enter the length of the rectangle: 10
Enter the width of the rectangle: 5
Area of Rectangle = 50.00

Area Calculator Menu
1. Triangle
2. Square
3. Circle
4. Polygon
5. Rectangle
6. Exit
Enter your choice (1-6): 6
Exiting program...
*/

