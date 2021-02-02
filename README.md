# Full-Adder
# Description
An adder is a digital circuit that performs addition of numbers. Full Adder is the adder which adds three inputs and produces two outputs. The first two inputs are A and B and the third input is an input carry as C-IN. The output carry is designated as C-OUT and the normal output is designated as S which is SUM.

# Programming Requirements
A full adder logic is designed in such a manner that can take eight inputs together to create a
byte-wide adder and cascade the carry bit from one adder to the another.
The figure below shows the block diagram of a full adder:
![alt text](https://i.imgur.com/uduEu95.png)

The truth table for the full adder is:
![alt text](https://i.imgur.com/SgJiYKc.png)

When the user first runs the program, you will display the following menu:
Welcome to Full-Adder!
(1) Compute and display the outputs
(2) Quit
Depending on the option given by the user, this program will work as follows:
Option 1: When the user chooses this option, this program will first ask from user to enter 3-digit binary
inputs. If more than 3 bits is entered, then your program should print an error message and ask
the user to reenter the input. Three digits will be used as three inputs required by the full adder.
The first digit is A, the second digit is B and the third digit is for C_IN.
The data lines can be entered in different bases, in base 2, base 8 or base 16. If the user is
entering the text in base 2, then you will not need to make base conversions. However, if the
user is entering in base 16 or base 8, then it will need to convert it to binary. Assuming that the
user is entering more than 3 bits for inputs, then program should print an error message and
ask the user to enter the values again. If the data lines are entered in base 8 or 16, program
will convert it to 3- digit binary number. If a value > 7 is entered, then your program will print a
message “not possible to convert it to 3-digit binary number” and will ask the user to enter the
value again.
Which base will you use to enter input (base 16/8/2)? 2
Please enter input: 011
In order to compute the values of Sum and C_OUT, it need to use the following logical
expressions. For calculating Sum, will mainly use XOR operations and for calculating
the value of C_OUT.
SUM = C-IN XOR (A XOR B)
C_OUT = (A AND B) OR (C_IN AND (A XOR B))
