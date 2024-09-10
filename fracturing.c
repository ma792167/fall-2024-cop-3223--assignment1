//Matthew Yanos 9/9/2024
// professor Parra
// Intro to C
// section 5 

// this assignment took forever and I don't even know if I got it 100% (prob not), please send feedback or DM for any improvements 
// between work, school, band, this really stressed me out and took me a few days and some days over the due date to do aagh
// tdlr: I sucked as student these first few weeks and I'll be better next time.

#include <stdio.h>
#include <math.h>

// don't forget gcc fracturingDOTc/fracturing.c -lm && ./a.out


double calculateDistance() {
    
    //inting my distance variables for the two points 
    int dist_x1 = 0;
    int dist_y1 = 0;
    int dist_x2 = 0;
    int dist_y2 = 0;
    
    //Point 1
    printf("Enter the coordinates for Point #1\n");
    scanf("%d", &dist_x1);
    scanf("%d", &dist_y1);
    
    //Point 2
    printf("Enter the coordinates for Point #2\n");
    scanf("%d", &dist_x2);
    scanf("%d", &dist_y2);
    
    //restating what points were entered in for clarity
    printf("Point #1 entered: x1 = %d; y1 = %d\n", dist_x1, dist_y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", dist_x2, dist_y2);
    
    double distance = sqrt(pow(dist_x2 - dist_x1, 2) + pow(dist_y2 - dist_y1, 2));
    
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;

}
    
double calculatePerimeter(){
    //perimeter of the circle = circumference
    // C = 2PIr
    float PI = 3.14159;
    
    int dist_x1 = 0;
    int dist_y1 = 0;
    int dist_x2 = 0;
    int dist_y2 = 0;
    
   
    printf("Enter the coordinates for Point #1\n");
    scanf("%d", &dist_x1);
    scanf("%d", &dist_y1);
    
    
    printf("Enter the coordinates for Point #2\n");
    scanf("%d", &dist_x2);
    scanf("%d", &dist_y2);
    
    
    printf("Point #1 entered: x1 = %d; y1 = %d\n", dist_x1, dist_y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", dist_x2, dist_y2);
    
    double distance = sqrt(pow(dist_x2 - dist_x1, 2) + pow(dist_y2 - dist_y1, 2));
    
    double perimeter = (distance/2 * PI * 2);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    
    
     
    return 4; //the first functions were hard but not impossible 
    
}

double calculateArea(){
    
    float PI = 3.14159;
    
    int dist_x1 = 0;
    int dist_y1 = 0;
    int dist_x2 = 0;
    int dist_y2 = 0;
    
   
    printf("Enter the coordinates for Point #1\n");
    scanf("%d", &dist_x1);
    scanf("%d", &dist_y1);
    
    
    printf("Enter the coordinates for Point #2\n");
    scanf("%d", &dist_x2);
    scanf("%d", &dist_y2);
    
    
    printf("Point #1 entered: x1 = %d; y1 = %d\n", dist_x1, dist_y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", dist_x2, dist_y2);
    
    double distance = sqrt(pow(dist_x2 - dist_x1, 2) + pow(dist_y2 - dist_y1, 2));
    
    double area = (PI * pow((distance/2), 2));
    
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 3; //it got easier as I went along :))

    
}

double calculateWidth(){
    
    float PI = 3.14159;
    
    int dist_x1 = 0;
    int dist_y1 = 0;
    int dist_x2 = 0;
    int dist_y2 = 0;
    
   
    printf("Enter the coordinates for Point #1\n");
    scanf("%d", &dist_x1);
    scanf("%d", &dist_y1);
    
    
    printf("Enter the coordinates for Point #2\n");
    scanf("%d", &dist_x2);
    scanf("%d", &dist_y2);
    
    
    printf("Point #1 entered: x1 = %d; y1 = %d\n", dist_x1, dist_y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", dist_x2, dist_y2);
    
    double distance = sqrt(pow(dist_x2 - dist_x1, 2) + pow(dist_y2 - dist_y1, 2));
    
    double width = distance;
    
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 3; 
    
}


    
double calculateHeight(){
    
    float PI = 3.14159;
    
    int dist_x1 = 0;
    int dist_y1 = 0;
    int dist_x2 = 0;
    int dist_y2 = 0;
    
   
    printf("Enter the coordinates for Point #1\n");
    scanf("%d", &dist_x1);
    scanf("%d", &dist_y1);
    
    
    printf("Enter the coordinates for Point #2\n");
    scanf("%d", &dist_x2);
    scanf("%d", &dist_y2);
    
    
    printf("Point #1 entered: x1 = %d; y1 = %d\n", dist_x1, dist_y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", dist_x2, dist_y2);
    
    double distance = sqrt(pow(dist_x2 - dist_x1, 2) + pow(dist_y2 - dist_y1, 2));
    
    double height = distance;
    
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 3;
    
}

int main(int argc, char **argv){
    
    calculateDistance();
    
    calculatePerimeter();
    
    calculateArea();
    
    calculateWidth();
    
    calculateHeight();
    
    return 0;

}
