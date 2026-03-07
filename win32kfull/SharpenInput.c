unsigned __int64 __fastcall SharpenInput(
        __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r10
  unsigned __int8 *v8; // r11
  unsigned __int8 *v9; // rbx
  unsigned __int8 *v10; // rdi
  _BYTE *v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  char v16; // cl
  unsigned __int64 result; // rax

  v6 = a6 + a2;
  v7 = a6 + a4;
  if ( (a1 & 0x200) != 0 )
  {
    a2 = a4;
    v6 = a6 + a4;
  }
  else
  {
    *(_WORD *)(a4 - 3) = *(_WORD *)a4;
    *(_BYTE *)(a4 - 1) = *(_BYTE *)(a4 + 2);
    *(_WORD *)v7 = *(_WORD *)(v7 - 3);
    *(_BYTE *)(v7 + 2) = *(_BYTE *)(v7 - 1);
    if ( a4 < v7 )
    {
      v8 = (unsigned __int8 *)(a4 + 3);
      v9 = (unsigned __int8 *)(a5 + 2);
      v10 = (unsigned __int8 *)(a3 + 2);
      v11 = (_BYTE *)(a2 + 2);
      v12 = a4 - a2 - 2;
      do
      {
        v13 = (12 * (unsigned __int8)v11[v12] - *(v10 - 2) - *(v9 - 2) - *(v8 - 6) - *v8) >> 3;
        if ( (v13 & 0xFF00) != 0 )
          LOBYTE(v13) = ~HIBYTE(v13);
        *(v11 - 2) = v13;
        v14 = (12 * *(v8 - 2) - *(v10 - 1) - *(v9 - 1) - *(v8 - 5) - v8[1]) >> 3;
        if ( (v14 & 0xFF00) != 0 )
          LOBYTE(v14) = ~HIBYTE(v14);
        *(v11 - 1) = v14;
        v15 = (12 * *(v8 - 1) - *(v8 - 4) - v8[2] - *v9 - *v10) >> 3;
        if ( (v15 & 0xFF00) != 0 )
          LOBYTE(v15) = ~HIBYTE(v15);
        *v11 = v15;
        v8 += 3;
        v11 += 3;
        v9 += 3;
        v10 += 3;
      }
      while ( (unsigned __int64)&v11[v12] < v7 );
    }
  }
  *(_WORD *)(a2 - 3) = *(_WORD *)a2;
  *(_BYTE *)(a2 - 1) = *(_BYTE *)(a2 + 2);
  *(_WORD *)(a2 - 6) = *(_WORD *)(a2 - 3);
  *(_BYTE *)(a2 - 4) = *(_BYTE *)(a2 - 1);
  v16 = *(_BYTE *)(a2 - 4);
  *(_WORD *)(a2 - 9) = *(_WORD *)(a2 - 6);
  result = a2;
  *(_BYTE *)(a2 - 7) = v16;
  *(_WORD *)(v6 + 3) = *(_WORD *)(v6 - 3);
  *(_BYTE *)(v6 + 5) = *(_BYTE *)(v6 - 1);
  *(_WORD *)v6 = *(_WORD *)(v6 + 3);
  *(_BYTE *)(v6 + 2) = *(_BYTE *)(v6 + 5);
  return result;
}
