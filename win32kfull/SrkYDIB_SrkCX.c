/*
 * XREFs of SrkYDIB_SrkCX @ 0x1C014C952
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0266AA0 (ShrinkDIB_CY_SrkCX.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SrkYDIB_SrkCX(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // edi
  int v9; // esi
  _WORD *v10; // rbp
  __int64 v11; // r12
  unsigned int v12; // r11d
  _BYTE *v13; // r15
  __int64 v14; // r14
  __int64 v15; // r9
  int v16; // r11d
  int v17; // edx
  int v18; // r8d
  __int16 v19; // [rsp+28h] [rbp+8h]

  result = *(unsigned __int16 *)(a1 + 14);
  if ( *(_WORD *)(a1 + 14) )
  {
    v6 = *(unsigned __int16 *)(a1 + 10);
    v7 = result * a2[2];
    v8 = result * a2[1];
    v9 = result * *a2;
    result = (unsigned __int64)&a2[v6];
    a2 += 2 * v6 + v6;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  v10 = *(_WORD **)(a1 + 40);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = (unsigned __int16)*v10;
  if ( *v10 )
  {
    v13 = (_BYTE *)(a3 + 1);
    do
    {
      LOWORD(result) = *(_WORD *)a2;
      ++v10;
      v14 = a2[2];
      a2 += 3;
      v19 = result;
      v15 = v11 + ((v12 >> 5) & 0x400);
      if ( (v12 & 0x4000) != 0 )
      {
        v16 = v12 & 0x3FFF;
        v17 = v16 * BYTE1(result);
        v18 = v16 * (unsigned __int8)result;
        v13[1] = (unsigned int)(v16 * v14 + v7 + 4096) >> 13;
        *v13 = (unsigned int)(v17 + v8 + 4096) >> 13;
        *(v13 - 1) = (unsigned int)(v18 + v9 + 4096) >> 13;
        v13 += 3;
        v7 = *(_DWORD *)(v15 + 4 * v14) - v16 * v14;
        result = (unsigned __int8)result;
        v8 = *(_DWORD *)(v15 + 4LL * HIBYTE(v19)) - v17;
        v9 = *(_DWORD *)(v15 + 4LL * (unsigned __int8)v19) - v18;
      }
      else
      {
        v7 += *(_DWORD *)(v15 + 4 * v14);
        v8 += *(_DWORD *)(v15 + 4LL * BYTE1(result));
        result = (unsigned __int8)result;
        v9 += *(_DWORD *)(v15 + 4LL * (unsigned __int8)v19);
      }
      v12 = (unsigned __int16)*v10;
    }
    while ( *v10 );
  }
  return result;
}
