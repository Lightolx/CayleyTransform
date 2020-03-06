#include <iostream>
#include <eigen3/Eigen/Eigen>
using std::cout;
using std::endl;

int main()
{
    Eigen::Vector3d l(1,0,0);
    l.normalize();
    Eigen::AngleAxisd angleAxisd(M_PI/4, l);
    Eigen::Matrix3d R(angleAxisd);
    cout << "R is\n" << R << endl;
    cout << "R.det = " << R.determinant() << endl;
    Eigen::Matrix3d I = Eigen::Matrix3d::Identity();
    Eigen::Matrix3d S = (R - I)*(R + I).inverse();
    std::cout << "S is\n" << S << std::endl;
    cout << "tan45 = " << tan(M_PI/3) << endl;

}