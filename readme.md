## Introduction to Pass by Reference

Examine the code and comments for the program. Run the program and see how it computes and outputs the value for the gross pay.

Then, fill in the code as indicated by the comments at the end of the **computePaycheck** and **main** functions to display the net pay. Note that the function computePaycheck determines the net pay by subtracting 15% from the gross pay. The main function is where those values are printed after calling computePaycheck.

Notice that the function computePaycheck has four parameters. The first two, **rate** and **time**, are passed by value while the last two, **gross** and **net**, have an **&** after their data type indicating that they are **pass by reference**. 

When computePaycheck is called in main, the argument **grossPay** is paired with the function parameter **gross** since they both are the third parameter in their respective lists. But since this pairing is pass by reference, these two names refer to the SAME memory location. Similarly, the argument **netPay** is paired with the fourth parameter, **net**.

Therefore, When the computePaycheck function makes changes to its parameter gross it also changes the value of grossPay. Similarly, changes made in the function to the net parameter are also reflected in netPay after the function call. After the computePaycheck function finds gross and net, control goes back to the main function that has these values stored in grossPay and netPay. 
