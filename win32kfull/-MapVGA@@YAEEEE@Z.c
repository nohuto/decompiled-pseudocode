/*
 * XREFs of ?MapVGA@@YAEEEE@Z @ 0x1C02A600C
 * Callers:
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C02A5F9C (-MakeITableVGA@@YAHPEAE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MapVGA(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // rax
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  int v13; // ecx

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (unsigned __int16)word_1C032A6E0[(2 * (a1 & 0x18u)) | ((a2 & 0x18 | ((unsigned __int64)a3 >> 2) & 6) >> 1)];
  if ( (v6 & 0xFFF0) == 0 )
    return v6 & 0xF;
  v7 = 0;
  v8 = 0x7FFFFFFF;
  while ( v6 )
  {
    v9 = v6 & 0xF;
    v10 = v6 & 0xF;
    v11 = (unsigned __int8)byte_1C032A6A1[4 * v9];
    v12 = (unsigned __int8)byte_1C032A6A0[4 * v9] - v3;
    LODWORD(v9) = (unsigned __int8)byte_1C032A6A2[4 * v9] - v4;
    v13 = v12 * v12 + v9 * v9 + (v11 - v5) * (v11 - v5);
    if ( v13 >= v8 )
      v10 = v7;
    v6 >>= 4;
    v7 = v10;
    if ( v13 >= v8 )
      v13 = v8;
    v8 = v13;
  }
  return v7;
}
