//To Find the Volume,TSA,LSA of a cuboid and the Area and Perimeter of a Rectangle
#include <stdio.h>
int main(){
    float length;//Making the Lenght as a Real Number i.e you can even put a decimal also a interger.
    float breadth;//Making the Breadth as a Real Number i.e you can even put a decimal also a interger.
    float height;//Making the Height as a Real Number i.e you can even put a decimal also a interger.
    float Volume;//Making the Volume as a Real Number i.e the Output can also come in a Interger formas well as decimal(upto 6 decimal places).
    float TSA;//Making the TSA as a Real Number i.e the Output can also come in a Interger formas well as decimal(upto 6 decimal places).
    float LSA;//Making the LSA as a Real Number i.e the Output can also come in a Interger formas well as decimal(upto 6 decimal places).
    float area;//Making the area as a Real Number i.e the Output can also come in a Interger formas well as decimal(upto 6 decimal places).
    float perimeter;//Making the perimeter as a Real Number i.e the Output can also come in a Interger formas well as decimal(upto 6 decimal places).
    printf("Enter the Value of the Length of the Rectangle:"); 
    scanf("%f",&length);//Taking the Value the lenghth.
     printf("Enter the Value of the Breadth of the Rectangle:");
    scanf("%f",&breadth);//Taking the Value the breadth.
     printf("Enter the Value of the Height of the Rectangle:");
    scanf("%f",&height);//Taking the Value the height.

    Volume = length*breadth*height;//Assigning the value of Volume
    TSA =2*(length*breadth+breadth*height+length*height); //Assigning the value of TSA
    LSA = 2*(length+breadth)*height;//Assigning the value of LSA
    area =length*breadth;//Assigning the value of Area
    perimeter =  2*(length+breadth);//Assigning the value of perimeter

    printf("The Volume of the Cuboid is %f\n",Volume);//Printing the Volume
    printf("The TSA of the Cuboid is %f\n",TSA);//Printing the TSA
    printf("The LSA of the Cuboid is %f\n",LSA);//Printing the LSA
    printf("The Area of the Cuboid is %f\n",area);//Printing the Area
    printf("The Perimeter of the Cuboid is %f\n",perimeter);//Printing the Perimeter

    return 0;
}