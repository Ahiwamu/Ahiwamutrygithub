#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    double rad = deg*M_PI/180.0;
    return rad;
}

double rad2deg(double rad){
    double deg = rad*180.0/M_PI;
    return deg;
}

double findXComponent(double l1, double l2, double rad1, double rad2){
    double x1, x2, xcomp;
    x1 = l1*cos(rad1);
    x2 = l2*cos(rad2);
    xcomp = x1 + x2;
    return xcomp;
}

double findYComponent(double l1, double l2, double rad1, double rad2){
    double y1, y2, ycomp;
    y1 = l1*sin(rad1);
    y2 = l2*sin(rad2);
    ycomp = y1 + y2;
    return ycomp;
}

double pythagoras(double xcomp, double ycomp){
    double length;
    xcomp = pow(xcomp,2);
    ycomp = pow(ycomp,2);
    length = sqrt(xcomp+ycomp);
    return length;
}

void showResult(double length, double direct){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direct << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
