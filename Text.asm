.686 
.MODEL FLAT, C 
.STACK 2048 
.DATA 

.CODE 

ThreeProd PROC num1:dword , num2:dword, num3:dword

       mov eax, num1
       mov ebx, num2
       mov ecx, num3
       mul ebx
       mul ecx

ret

ThreeProd ENDP

END