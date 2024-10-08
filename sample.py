# This program prints "Hello, World!" and does basic arithmetic

def main():
    # Print a message
    print("Hello, World!")

    # Perform some basic arithmetic
    a = 5
    b = 3
    sum_result = a + b
    diff_result = a - b
    product_result = a * b
    division_result = a / b

    # Print the results
    print(f"Sum of {a} and {b} is: {sum_result}")
    print(f"Difference between {a} and {b} is: {diff_result}")
    print(f"Product of {a} and {b} is: {product_result}")
    print(f"Division of {a} by {b} is: {division_result:.2f}")

# Call the main function
if __name__ == "__main__":
    main()
