    AREA Mul2_func, CODE
    EXPORT Mul2
Mul2
    LDR R1, =my_const
    LDR R1, [R1]
    LSL R0, R0, R1
    BX LR
    AREA my_data, DATA
my_const
    DCW 1
    END