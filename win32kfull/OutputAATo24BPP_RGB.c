/*
 * XREFs of OutputAATo24BPP_RGB @ 0x1C025B100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo24BPP_RGB(unsigned int *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 *v6; // rdx
  _BYTE *v7; // r9
  _BYTE *v8; // r9

  result = *a1;
  v6 = (unsigned __int8 *)(a2 + 4);
  if ( (result & 0x80u) == 0LL )
  {
    if ( (unsigned __int64)v6 < a3 )
    {
      v8 = (_BYTE *)(a4 + 1);
      do
      {
        v8[1] = ~*(_BYTE *)(a5 + 4LL * v6[2] + 2048);
        *v8 = ~*(_BYTE *)(a5 + 4LL * v6[1] + 1024);
        v8 += 3;
        result = *v6;
        v6 += 4;
        *(v8 - 4) = ~*(_BYTE *)(a5 + 4 * result);
      }
      while ( (unsigned __int64)v6 < a3 );
    }
  }
  else if ( (unsigned __int64)v6 < a3 )
  {
    v7 = (_BYTE *)(a4 + 1);
    do
    {
      if ( v6[3] )
      {
        v7[1] = ~*(_BYTE *)(a5 + 4LL * v6[2] + 2048);
        *v7 = ~*(_BYTE *)(a5 + 4LL * v6[1] + 1024);
        result = *v6;
        *(v7 - 1) = ~*(_BYTE *)(a5 + 4 * result);
      }
      v7 += 3;
      v6 += 4;
    }
    while ( (unsigned __int64)v6 < a3 );
  }
  return result;
}
