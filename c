num = int(input("Digite um número: "))

fib1 = 0
fib2 = 1
fib = fib1 + fib2

while fib < num:
    fib1 = fib2
    fib2 = fib
    fib = fib1 + fib2

if fib == num:
    print(f"O número {num} pertence à sequência de Fibonacci.")
else:
    print(f"O número {num} não pertence à sequência de Fibonacci.")
