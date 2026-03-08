/*
 * XREFs of SymCryptFdefRawGetValue @ 0x1403FFE54
 * Callers:
 *     SymCryptFdefModElementGetValue @ 0x1403FE668 (SymCryptFdefModElementGetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawGetValue(unsigned int *a1, int a2, _BYTE *a3, __int64 a4, int a5)
{
  unsigned int v5; // r11d
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int i; // r10d
  int v12; // ebx

  v5 = 16 * a2;
  if ( a5 == 1 )
  {
    v8 = 1LL;
  }
  else
  {
    if ( a5 != 2 )
      return 32782LL;
    a3 = &a3[a4 - 1];
    v8 = -1LL;
  }
  result = 0LL;
  v9 = 0;
  if ( v5 )
  {
    while ( 2 )
    {
      v10 = *a1;
      for ( i = 0; i < 4; ++i )
      {
        v12 = (unsigned __int8)v10;
        v10 >>= 8;
        if ( a4 )
        {
          --a4;
          *a3 = v12;
          a3 += v8;
        }
        else if ( v12 )
        {
          return 32781LL;
        }
      }
      ++v9;
      ++a1;
      if ( v9 < v5 )
        continue;
      break;
    }
  }
  for ( ; a4; --a4 )
  {
    *a3 = 0;
    a3 += v8;
  }
  return result;
}
