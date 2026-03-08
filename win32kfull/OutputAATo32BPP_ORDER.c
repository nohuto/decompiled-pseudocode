/*
 * XREFs of OutputAATo32BPP_ORDER @ 0x1C025B280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall OutputAATo32BPP_ORDER(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        unsigned __int64 a9)
{
  unsigned __int8 *v10; // r8
  unsigned __int64 result; // rax
  _BYTE *v12; // rdx

  v10 = (unsigned __int8 *)(a2 + 4);
  result = a9 >> 24;
  if ( (*a1 & 0x80u) == 0 )
  {
    if ( (unsigned __int64)v10 < a3 )
    {
      v12 = (_BYTE *)(BYTE2(a9) + a4);
      do
      {
        v12[BYTE1(a9) - (unsigned __int64)BYTE2(a9)] = ~*(_BYTE *)(a5 + 4LL * v10[2] + 2048);
        *v12 = ~*(_BYTE *)(a5 + 4LL * v10[1] + 1024);
        result = *v10;
        v10 += 4;
        v12[BYTE3(a9) - (unsigned __int64)BYTE2(a9)] = ~*(_BYTE *)(a5 + 4 * result);
        v12 += 4;
      }
      while ( (unsigned __int64)v10 < a3 );
    }
  }
  else
  {
    for ( ; (unsigned __int64)v10 < a3; v10 += 4 )
    {
      if ( v10[3] )
      {
        *(_BYTE *)(BYTE1(a9) + a4) = ~*(_BYTE *)(a5 + 4LL * v10[2] + 2048);
        *(_BYTE *)(BYTE2(a9) + a4) = ~*(_BYTE *)(a5 + 4LL * v10[1] + 1024);
        *(_BYTE *)(BYTE3(a9) + a4) = ~*(_BYTE *)(a5 + 4LL * *v10);
      }
      a4 += 4LL;
    }
  }
  return result;
}
