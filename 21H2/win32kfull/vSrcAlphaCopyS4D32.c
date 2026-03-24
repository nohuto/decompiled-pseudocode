/*
 * XREFs of vSrcAlphaCopyS4D32 @ 0x1C02791B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vSrcAlphaCopyS4D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  __int64 v8; // rbp
  unsigned int v9; // r10d
  _DWORD *v10; // r8
  int v11; // r13d
  int v12; // edi
  __int64 v13; // r14
  unsigned __int64 result; // rax
  char *v15; // rsi
  __int64 v16; // r15
  char *v17; // rdx
  _DWORD *v18; // rcx
  __int64 v19; // r11
  char v20; // r10
  _DWORD *v21; // rbx
  char v22; // r9

  v8 = a3;
  v9 = (a5 + 1) & 0xFFFFFFFE;
  v10 = (_DWORD *)(a4 + 4LL * a5);
  v11 = v9 - a5;
  v12 = a8;
  v13 = (unsigned int)((int)((a6 & 0xFFFFFFFE) - v9) / 2);
  result = (unsigned int)(a2 / 2);
  v15 = (char *)((int)result + a1);
  if ( a8 )
  {
    v16 = a7;
    do
    {
      v17 = v15;
      v18 = v10;
      if ( v11 )
      {
        result = (unsigned __int8)*v15;
        v18 = v10 + 1;
        if ( (result & 0xF) != 0 )
        {
          result = dword_1C02FABB0[result & 0xF];
          *v10 = result;
        }
        v17 = v15 + 1;
      }
      if ( (int)v13 > 0 )
      {
        v19 = v13;
        do
        {
          v20 = *v17;
          v21 = v18 + 1;
          v22 = *v17;
          if ( (*v17 & 0xF0) != 0 )
          {
            result = dword_1C02FABB0[(unsigned __int64)(unsigned __int8)*v17 >> 4];
            *v18 = result;
          }
          v18 += 2;
          if ( (v20 & 0xF) != 0 )
          {
            result = dword_1C02FABB0[v22 & 0xF];
            *v21 = result;
          }
          ++v17;
          --v19;
        }
        while ( v19 );
        v16 = a7;
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        result = (unsigned __int8)*v17;
        if ( (result & 0xF0) != 0 )
        {
          result = dword_1C02FABB0[result >> 4];
          *v18 = result;
        }
      }
      v15 += v8;
      v10 = (_DWORD *)((char *)v10 + v16);
      --v12;
    }
    while ( v12 );
  }
  return result;
}
