
#include<stdio.h>
#include<math.h>
#define pi 3.14159265
// Addation function.
void add()
{
    int num,sum;
    printf("\nEnter how many numbers want to add :");
    scanf("%d",&num);
    float a[num];
    printf("\nEnter the numbers :\n");
    sum=0;
    for(int i=0;i<num;i++)
    {
         scanf("%f",&a[i]);
        sum +=a[i];
    }
    printf("sum = %d\n",sum);
    return;

}
// subtraction function
void  sub()
{
    int num1,num2;
    printf("\nEnter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");;
    scanf("%d",&num2);

    printf("subtract = %d\n",num1-num2);
    return;

}
//multiply function
void multiply()
{
    int num,mul;
    printf("\nEnter how many numbers want to multiply :");
    scanf("%d",&num);
    float a[num];
    printf("\nEnter the numbers :\n");
    mul=1;
    for(int i=0;i<num;i++)
    {
         scanf("%f",&a[i]);
        mul *=a[i];
    }
    printf("sum = %d\n",mul);
}
// Division function
void div()
{
    float num1,num2;
    l1:printf("\nEnter first number :");
    scanf("%f",&num1);
    printf("Enter Second number :");
    scanf("%f",&num2);
    if (num2==0)
    {
        printf("Error. division is not possible.\nEnter the correct number.\n");
        goto l1;
    }
    printf("Division = %.2f\n",num1/num2);
    return;
}
// square function
void sqr()
{
    float num;
    printf("Enter the number :");
    scanf("%f",&num);

    printf("square of %.2f =  %.2f\n",num,num*num);
    return;
}
//Square root function
void sqroot()
{
    int num;
    float root;
    printf("Enter number :");
    scanf("%d",&num);
    if (num<0)
    {
        num= -1*num;
        root = sqrt(num);
        printf("Square root of -%d is i%.2f\n",num,root);
    }
    else
    {
    root = sqrt(num);
    printf("Square root of %d is %.4f\n",num,root);
    }
    return;

}
// Cube root Function
void cbroot()
{
    int num;
    float root;
    printf("Enter number :");
    scanf("%d",&num);
    root = cbrt(num);
    printf("cube root of %d is %.4f\n",num,root);
    return;

}
//Average function
void avg()
{
    int num,sum,i;
    float avg;
    printf("\nEnter how many numbers you want to find Average :");
    scanf("%d",&num);
    float a[num];
    printf("\nEnter the numbers :\n");
    sum=0;
    for( i=0;i<num;i++)
    {
         scanf("%f",&a[i]);
        sum +=a[i];
    }
    avg = sum/(i*1.0);
    printf("Average = %.2f\n",avg);
    return;
}
// TO the power funtion.
void topower()
{
    int num,power;
    int result;
    printf("\nEnter the number :");
    scanf("%d",&num);
    printf("Enter the power :");
    scanf("%d",&power);
    result=1;
    for(int i=1; i<=power;i++)
    {
        result= result*num;
    }
    printf("%d to the power %d = %d",num,power,result);
    return;

}

// Matrix Addition Function.
void matrix_add()
{
    int m1,n1,m2,n2;
    l1:printf("\nEnter number of row and column of First matrix :\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter number of row and column of Second  matrix :\n");
    scanf("%d%d",&m2,&n2);

    if (m1!=m2 || n1!=n2)
    {
        printf("\nThe row and column you have entered addition of this order of matrix is not possible .\n");
        printf("Enter correct row and column\n");
        goto l1;
    }

    int a[m1][n1],b[m2][m2],c[m2][n2];
    printf("Enter %d element of first matrix :\n",m1*n1);
    int i,j,k;
   for(i=0;i<m1;i++)
     {
        for(j=0;j<n1;j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter %d element of second matrix :\n",m2*n2);
   for(i=0;i<m2;i++)
     {
        for(j=0;j<n2;j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("First matrix :\n");
       for(i=0;i<m1;i++)
     {
        for(j=0;j<n1;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix :\n");
    for(i=0;i<m2;i++)
     {
        for(j=0;j<n2;j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    //add two matrix
    printf("sum of two matrix :\n");
    for(i=0;i<m1;i++)
     {
        for(j=0;j<n1;j++)
        {
            printf("%5d",c[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return;
}
// matrix Subtraction Function.
void matrix_sub()
{
    int m1,n1,m2,n2;
    l1:printf("\nEnter number of row and column of First matrix :\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter number of row and column of Second  matrix :\n");
    scanf("%d%d",&m2,&n2);

    if (m1!=m2 || n1!=n2)
    {
        printf("\nThe row and column you have entered subtraction of this order of matrix is not possible .\n");
        printf("Enter correct row and column\n");
        goto l1;
    }

    int a[m1][n1],b[m2][m2],c[m2][n2];
    printf("Enter %d element of first matrix :\n",m1*n1);
    int i,j,k;
   for(i=0;i<m1;i++)
     {
        for(j=0;j<n1;j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter %d element of second matrix :\n",m2*n2);
   for(i=0;i<m2;i++)
     {
        for(j=0;j<n2;j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("First matrix :\n");
       for(i=0;i<m1;i++)
     {
        for(j=0;j<n1;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix :\n");
    for(i=0;i<m2;i++)
     {
        for(j=0;j<n2;j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    //subtract two matrix
    printf("subtraction of two matrix :\n");
    for(i=0;i<m1;i++)
     {
        for(j=0;j<n1;j++)
        {
            printf("%5d",c[i][j]=a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return;
}

//matrix multiplication function
void matrix_multiply()
{
     int m1,n1,m2,n2;
    int i,j,k;

    l1:printf("\nEnter the row and column of First matrix :\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the row and column of Second matrix :\n");
    scanf("%d%d",&m2,&n2);
    if (n1!=m2)
    {
     printf("cannot be multiplied between these two matrices.\n");
     printf("Enter the correct row and column whose multiplaction is possible.\n\n");
     goto l1;
    }

    int a[m1][n1],b[m2][n2] ,c[m1][n2];
    // Enter first matrix
    printf("Enter %d element of 1st matrix:\n",m1*n1);
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    //  Enter second matrix
    printf("Enter %d element of second matrix:\n",m2*n2);
    for(i=0; i<m2; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    // multiplection two matricese
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n2; j++)
        {
            c[i][j]=0;
            for(k=0; k<n1; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("First matrix.\n");
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix.\n");
    for(i=0; i<m2; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //display result .
    printf("Multiplaction of both matrix  is .\n");
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return;
}
// Matrix transpose function .
void matrix_t()
{
    int m,n;
    int i,j;
    puts("\nEnter the row and column of the matrix :");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
    printf("Enter %d element of matrix : \n",n*m);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // perform transpose.
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    // display Entered matrix.
    puts("Entered matris.");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // display result.
    puts("Transpose of matrix.");
     for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return;
}
// matrix Determinant function.
void matrix_det()
{
   #define MAX_SIZE 10


    int n;

   l1: printf("\nEnter the order of the square matrix (maximum %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid matrix size. Please enter a valid size between 1 and %d.\n", MAX_SIZE);
        goto l1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the entered matrix
    printf("Entered matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate determinant
    double det = 0;

    if (n == 1) {
        det = matrix[0][0];
    } else if (n == 2) {
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        for (int i = 0; i < n; i++) {
            // Calculate the cofactor
            int sign = (i % 2 == 0) ? 1 : -1;
            int submatrix[MAX_SIZE][MAX_SIZE];
            int sub_i = 0, sub_j = 0;

            for (int row = 1; row < n; row++) {
                for (int col = 0; col < n; col++) {
                    if (col != i) {
                        submatrix[sub_i][sub_j++] = matrix[row][col];

                        if (sub_j == n - 1) {
                            sub_j = 0;
                            sub_i++;
                        }
                    }
                }
            }

            det += sign * matrix[0][i] * (n - 1 == 1 ? submatrix[0][0] : submatrix[0][0] * submatrix[1][1] - submatrix[0][1] * submatrix[1][0]);
        }
    }

    printf("Determinant of the matrix is: %.2f\n", det);

    return;
}
// differentation function .
void x()
{
    int a,n;
    puts("Enter aX^n . ");
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter n :");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%dX^%d = %d\n",a,n,a);
    }
    else
    {
        printf("%dX^%d = %dX^%d\n",a,n,a*n,n-1);
    }
    return;
}
// Differentation function .
void diff()
{
    char ch;
    int num;
    do
    {
    puts("\n1. sin x ");
    puts("2. cos x ");
    puts("3. tan x ");
    puts("4. sec x ");
    puts("5. cot x ");
    puts("6. cosec x ");
    puts("7. aX^n ");

    printf("\nEnter your choice :");
    scanf("%d",&num);

    switch (num)
    {
        case 1: printf("sin X = cos X");
            break;
        case 2: printf("cos X = -sin X\n");
            break;
        case 3: printf("tan X = sec^2 X\n");
            break;
        case 4: printf("sec X = sec X  x  tan X\n");
            break;
        case 5: printf("cot X = -cosec^2 X\n");
            break;
        case 6: printf("cosec X = -cosec X  x  cot X\n");
            break;
        case 7: x();
            break;
        default : printf("Default choice \n");
            break;
    }
    printf("\nDo you want to find again [y/n] : ");
    getchar();
    scanf("%c",&ch);
    }
    while(ch=='y');
         return;

}

// quadratic equation function .
void quad()
{
        double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b, and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("Roots are real and identical: %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

// cubic equation fuction.
void cubic()
{
     double a, b, c, d;

    // Input coefficients of the cubic equation
   l1: printf("Enter the coefficients (a, b, c, d) of the cubic equation (ax^3 + bx^2 + cx + d): \n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // Check if 'a' is not zero
    if (a == 0) {
        printf("Invalid input: 'a' cannot be zero for a cubic equation.\n");
        printf("Please enter correct coefficient of x^3.\n");
        goto l1;
    }

    // Calculate discriminant
    double delta = b * b - 3 * a * c;

    if (delta > 0) {
        // Real roots
        double root1 = (-b + cbrt(delta)) / (3 * a);
        double root2 = (-b - cbrt(delta)) / (3 * a);
        double root3 = -cbrt(delta) / (3 * a);

        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
        printf("Root 3: %.2lf\n", root3);
    } else if (delta == 0) {
        // Real and identical roots
        double root1 = -b / (3 * a);
        double root2 = root1;
        double root3 = root1;

        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
        printf("Root 3: %.2lf\n", root3);
    } else {
        // Complex roots
        double realPart = -b / (3 * a);
        double imaginaryPart = sqrt(fabs(delta)) / (3 * a);

        printf("Root 1: %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2: %.2lf - %.2lfi\n", realPart, imaginaryPart);
        printf("Root 3: %.2lf + %.2lfi\n", realPart, -imaginaryPart);
    }
    return;
}

//Rectangle Area and Perimeter function.
void rect()
{
    float l,b;
    printf("Enter the Lenght and Width of a Rectangle :\n");
    scanf("%f%f",&l,&b);

    printf("Area of Rectangle is %.2f Square unit.\n",(l*b));
    printf("Perimeter of Rectangle is %.2f unit.\n",2*(l+b));
    return;
}

//Circle area and perimerer function.
void circle()
{
    float r;
    printf("Enter of Radius :");
    scanf("%f",&r);
    printf("Area of Circle is %.2f square unit.\n",3.14*(r*r));
    printf("Perimeter of Circle is %.2f unit.\n",2*3.14*r);
    return;
}

//Triangle Area Function given three side
void triangle()
{
    float a,b,c,area,s,sm;
    printf("Enter three side of Triangle :\n");
    scanf("%f%f%f",&a,&b,&c);

    s = (a + b + c)/2;
    sm = (s*(s-a)*(s-b)*(s-c));

    printf("Area of Triangle is %.2f square unit.",sqrt(sm));
    return;
}

// Square Area And Perimeter Function.
void square()
{
    float a;
    printf("\nEnter Side of a Square :");
    scanf("%f",&a);
    printf("\nArea of Square is %.2f square unit.\n",a*a);
    printf("Perimeter of Square is %.2f unit.\n",4*a);
    return;
}

// Area of Cube Curved And total surface function.
void cube()
{
    float a;
    printf("\nEnter Side of cube :");
    scanf("%f",&a);
    printf("\nCurved Surface Area of Cube is %.2f square unit\n",4*a*a);
    printf("Total surface Area of Cube is %.2f Square unit\n",6*a*a);
    return;
}

// Area of cuboid Curved And Total surfae function.
void cuboid()
{
    float l,b,h;
    printf("\nEnter Cuboid length :");
    scanf("%f",&l);
    printf("Enter Cuboid Breadth :");
    scanf("%f",&b);
    printf("Enter Cuboid Height :");
    scanf("%f",&h);

    printf("\nCurved Surface Area of Cuboid is %.2f square unit\n",(2 * h * (l + b)));
    printf("Total Surface Area of Cuboid is %.2f square unit\n",2*(l*b + b*h + h*l));
    return;
}

// sin function
void si()
{
    int ang;
    float r ,fr;
    printf("Enter the angle :");
    scanf("%d",&ang);
    r = ang*pi/180.0;
    fr = sin(r);
    printf("sin(%d) = %f\n",ang,fr);
}
//cos function
void co()
{
        int ang;
    float r ,fr;
    printf("Enter the angle :");
    scanf("%d",&ang);
    r = ang*pi/180.0;
    fr = cos(r);
    printf("cos(%d) = %f\n",ang,fr);
}
//tan function
void ta()
{
    int ang;
    float r ,fr;
    printf("Enter the angle :");
    scanf("%d",&ang);
    r = ang*pi/180.0;
    fr = sin(r)/cos(r);
    printf("tan(%d) = %f\n",ang,fr);
}
// cot function
void cote()
{
    int ang;
    float r ,fr, fnl;
    printf("Enter the angle :");
    scanf("%d",&ang);
    r = ang*pi/180.0;
    fr = tan(r);
    fnl = 1/fr;
    printf("cot(%d) = %f\n",ang,fnl);
}
//sec function
void se()
{
        int ang;
    float r ,fr ,fnl;
    printf("Enter the angle :");
    scanf("%d",&ang);
    r = ang*pi/180.0;
    fr = cos(r);
    fnl = 1/fr;
    printf("sec(%d) = %f\n",ang,fnl);
}
//cosec function
void csec()
{
    int ang;
    float r ,fr, fnl;
    printf("Enter the angle :");
    scanf("%d",&ang);
    r = ang*pi/180.0;
    fr = sin(r);
    fnl = 1/fr;
    printf("cosec(%d) = %f\n",ang,fnl);
}
// trigonometric functions angle value
void trigofunction_angle()
{
    int choice;
    do{
    printf("\n--------------Trigonometric Functions--------------\n");
    printf("\n 1. sin \n 2. cos \n 3. tan \n 4. cot \n 5. sec \n 6. cosec \n 7. Exit\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: si();break;
        case 2: co();break;
        case 3: ta();break;
        case 4: cote();break;
        case 5: se();break;
        case 6: csec();break;
        default:printf("incorrect choice ! try again\n");
    }
    }
    while(choice != 7);
    return;
}

//  main function.
int main()
{
    char ch;
    int num;
    do{
    puts("1. Addition.                            11. Matrix Subtraction                        21. Square Area & Perimeter");
    puts("2. Subtraction                          12. Matrix Multiplication                     22. Cube Curved & total surface Area");
    puts("3. Multiplication                       13. Matrix Transpose                          23. Cuboid Total & Curved Surface Area");
    puts("4. Division                             14. Matrix Determinant                        24. Trigonometric functions value ");
    puts("5. Square                               15. Differentation ");
    puts("6. Square root                          16. Quadratic Equation ");
    puts("7. Cube root                            17. Cubic Equation ");
    puts("8. Average                              18. Rectangle Area & perimeter");
    puts("9. To the power                         19. Circle Area & Perimeter");
    puts("10. Matrix Addition                     20. Triangle Area given 3 side");


    printf("\nEnter your choice :");
    scanf("%d",&num);

    switch (num)
    {
    case 1: add();
        break;

    case 2: sub();
        break;

    case 3: multiply();
        break;

    case 4: div();
        break;

    case 5: sqr();
        break;

    case 6:sqroot();
        break;

    case 7:cbroot();
        break;

    case 8: avg();
        break;

    case 9: topower();
        break;

    case 10: matrix_add();
        break;

    case 11: matrix_sub();
        break;

    case 12: matrix_multiply();
        break;

    case 13: matrix_t();
        break;

    case 14: matrix_det();
        break;

    case 15: diff();
        break;

    case 16: quad();
        break;

    case 17: cubic();
        break;

    case 18: rect();
        break;

    case 19: circle();
        break;

    case 20: triangle();
        break;

    case 21: square();
        break;

    case 22: cube();
        break;

    case 23: cuboid();
        break;

    case 24: trigofunction_angle();
        break;

    default:printf("\nError. Wrong Choice.\n");
        break;
    }
    printf("\nDo you want to perform any  more operation [y/n] :");
    getchar();
    scanf("%c",&ch);
    }
    while(ch=='y' || ch == 'Y');

return 0;
}
