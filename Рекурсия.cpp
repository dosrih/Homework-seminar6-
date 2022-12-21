import math
import itertools

def main():
    input_file = open("input.txt", "r")
    output_file = open("output.txt", "w")
    line = input_file.readline().split()
    a = list(line[0])


    b = list(itertools.permutations(a))
    for i in range(len(b)):
        output_file.write(str(''.join(str(x) for x in b[i])) + "\n")

if __name__ == "__main__":
    main()
    
