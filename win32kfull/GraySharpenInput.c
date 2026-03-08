/*
 * XREFs of GraySharpenInput @ 0x1C0265260
 * Callers:
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0264850 (GrayExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall GraySharpenInput(
        __int16 a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6)
{
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // r11
  unsigned __int8 *v8; // r10
  _BYTE *v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 *v11; // rbp
  int v12; // r8d
  unsigned __int8 v13; // cl
  unsigned __int8 *result; // rax
  unsigned __int8 v15; // cl

  v6 = a3;
  v7 = &a2[a6];
  v8 = &a4[a6];
  if ( (a1 & 0x200) != 0 )
  {
    a2 = a4;
    v7 = &a4[a6];
  }
  else
  {
    *(a4 - 1) = *a4;
    *v8 = *(v8 - 1);
    if ( a4 < v8 )
    {
      v9 = (_BYTE *)(a2 - a3);
      v10 = a5 - (_QWORD)a4;
      do
      {
        v11 = a4 + 1;
        v12 = (12 * *a4 - a4[v10] - *(a4 - 1) - a4[1] - *v6) >> 3;
        if ( (v12 & 0xFF00) != 0 )
          LOBYTE(v12) = ~HIBYTE(v12);
        v9[(_QWORD)v6] = v12;
        ++a4;
        ++v6;
      }
      while ( v11 < v8 );
    }
  }
  v13 = *a2;
  result = a2;
  *(a2 - 1) = *a2;
  *(a2 - 2) = v13;
  *(a2 - 3) = v13;
  v15 = *(v7 - 1);
  v7[1] = v15;
  *v7 = v15;
  return result;
}
