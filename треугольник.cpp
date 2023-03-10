По целочисленным координатам вершин треугольника (x1,y1), (x2,y2) и (x3,y3) требуется вычислить его площадь.

Входные данные
Входной файл INPUT.TXT содержит 6 целых чисел x1,y1,x2,y2,x3,y3 – координаты вершин треугольника. Все числа не превышают 106 по абсолютной величине.

Выходные данные
В выходной файл OUTPUT.TXT выведите точное значение площади заданного треугольника.

def main():
    input_file = open("input.txt", "r")
    output_file = open("output.txt", "w")
    current_line = input_file.readline().split()
    x1,y1,x2,y2,x3,y3 = int(current_line[0]),int(current_line[1]),int(current_line[2]),int(current_line[3]),int(current_line[4]),int(current_line[5])
 
    ans = abs(((x1-x3)*(y2-y3)-(y1-y3)*(x2-x3))/2)
 
    output_file.write(str(ans) + "\n")
    input_file.close()
    output_file.close()
 
 
if __name__ == "__main__":
    main()
