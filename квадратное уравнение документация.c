#include "stdio.h"
#include "math.h"

//-----------------------------------------------

const double accuracy = 1E-6;  ///< ���������� ��� �������� ����������� ����

//-----------------------------------------------

int Solvelin (double a, double b);
int Solvesquare (double a, double b, double c);
int isZero (double x);

//-----------------------------------------------

/*!

    \brief ������� ������� ���������
    \author Ivanov Ivan
    \version 1.0
    \date 7.09.2020�.
    \details ��������� �������� � ���� ������� �������� ��������� ��� ������� ������� ����������
    \code
    int main()

    {

    double a = 0, b = 0, c= 0;

    printf ("\n"
            " Solving square equation: ax^2 + bx + c = 0.\n"
            " Enter a: ");
    scanf (" %lg", &a);

    printf (" Enter b: ");
    scanf (" %lg", &b);

    printf (" Enter c: ");
    scanf (" %lg", &c);

    if (isZero(a) == 0)
        Solvelin (b, c);

    else
        Solvesquare (a, b, c);

    return 0;
    }
    \endcode

*/
int main()

    {

    double a = 0, b = 0, c= 0;

    printf ("\n"
            " Solving square equation: ax^2 + bx + c = 0.\n"
            " Enter a: ");
    scanf (" %lg", &a);

    printf (" Enter b: ");
    scanf (" %lg", &b);

    printf (" Enter c: ");
    scanf (" %lg", &c);

    if (isZero(a) == 0)
        Solvelin (b, c);

    else
        Solvesquare (a, b, c);

    return 0;
    }


//--------------------------------------------------------------

/*!
    \brief ������� ��� ������� ��������� ���������
    \param[in] a, b ������������ ��������� ���� ax + b = 0
    \details ������� ������ ������� ��������� ��������� ������� ������� �� �����
    \code
    int Solvelin (double a, double b)

    {

    printf ("\n"
            " You have entered a linear equation that has \n");

    if ((isZero(a) == 0) && (isZero(b) != 0))

        printf (" no roots!\n");

    if ((isZero(a) == 0) && (isZero(b) == 0))

        printf (" infinity roots!\n");

    if (isZero(a) != 0) {
        double x;
        x = -b/a;
        printf (" 1 root: \n x = %lg\n", x);
        }
    return 0;

    }
    \endcode

*/

int Solvelin (double a, double b)

{

printf ("\n"
        " You have entered a linear equation that has \n");

if ((isZero(a) == 0) && (isZero(b) != 0))

    printf (" no roots!\n");

if ((isZero(a) == 0) && (isZero(b) == 0))

    printf (" infinity roots!\n");

if (isZero(a) != 0) {
    double x;
    x = -b/a;
    printf (" 1 root: \n x = %lg\n", x);
    }
return 0;

}

//-------------------------------------------------------

/*!
    \brief ������� ������ ��� ������� ����������� ���������
    \param[in] a, b, � ������������ ��������� ���� ax^2 + bx + � = 0
    \details ������� ������ ������� ����������� ��������� ������� ������� �� �����
    \code
    int Solvesquare (double a, double b, double c)

    {

    double discr = b*b - 4*a*c;

    if (discr > 0) {

    double sqrtdiscr = sqrt(b*b-4*a*c), x1, x2;

    x1 = (-b+sqrtdiscr)/2/a;
    x2 = (-b-sqrtdiscr)/2/a;

    printf (" 2 roots: x1 = %lg\n", x1);
    printf ("          x2 = %lg\n", x2);

    }

    if (isZero(discr) == 0) {
    double x;
    x = -b/2/a;
    printf (" 1 root: x1 = x2 = %lg\n", x);

    }
    \endcode

*/

int Solvesquare (double a, double b, double c)

        {

        double discr = b*b - 4*a*c;

        if (discr > 0) {

            double sqrtdiscr = sqrt(b*b-4*a*c), x1, x2;

            x1 = (-b+sqrtdiscr)/2/a;
            x2 = (-b-sqrtdiscr)/2/a;

            printf (" 2 roots: x1 = %lg\n", x1);
            printf ("          x2 = %lg\n", x2);

            }

        if (isZero(discr) == 0) {
            double x;
            x = -b/2/a;
            printf (" 1 root: x1 = x2 = %lg\n", x);

            }
        if (discr < 0)

           printf (" No roots!\n");

        return 0;

        }

//-------------------------------------------------------

/*!
    \brief ��� ������� ������ ��� ����������� �������� ��������� � ����
    \param[in] x - ������������ �����
    \return  1 - x ������� �� ���� �����, ��� �������� ��������� accuracy, 0 - � ������� �� ���� �����, ��� �������� ��������� accuracy
    \code
    int isZero (double x)
    {
    if (fabs (x) >= accuracy)
    return 1;
    return 0;
    }
    \endcode

*/

int isZero (double x)
{
if (fabs (x) >= accuracy)
return 1;
return 0;
}
