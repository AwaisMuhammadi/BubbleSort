
list_of_numbers = []


def swap(a, b):
    c = list_of_numbers[a]
    list_of_numbers[a] = list_of_numbers[b]
    list_of_numbers[b] = c


def bubble_sort():
    n = len(list_of_numbers)
    i = 0
    while i < n:
        j = 0
        while j < n-1:
            if list_of_numbers[j] > list_of_numbers[j+1]:
                swap(j, j+1)
            j = j + 1
        i = i + 1


def take_input(n):
    for i in range(n):
        list_of_numbers.append(input("Enter number:"))


take_input(int(input("Enter Length of the list:")))
bubble_sort()
print("Sorted List:")
print(list_of_numbers)