from telnetlib import STATUS


print("This program adds two numbers!")
num1 = input("The first number is ")
num2 = input("The second number is ")
sum = int(num1) + int(num2)
print("The sum of " + num1 + " and " + num2 + " is " + str(sum) + "!")