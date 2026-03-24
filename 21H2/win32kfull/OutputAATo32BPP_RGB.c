/*
 * XREFs of OutputAATo32BPP_RGB @ 0x1C00D17D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall OutputAATo32BPP_RGB(_DWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 *result; // rax
  __int64 v7; // r8
  __int64 v8; // r10
  _BYTE *v9; // r8
  __int64 v10; // r10

  result = (unsigned __int8 *)(a2 + 4);
  if ( (*a1 & 0x80u) != 0 )
  {
    if ( (unsigned __int64)result < a3 )
    {
      v9 = (_BYTE *)(a4 + 1);
      v10 = a4 - (_QWORD)result;
      do
      {
        if ( result[3] )
        {
          v9[1] = ~*(_BYTE *)(a5 + 4LL * result[2] + 2048);
          *v9 = ~*(_BYTE *)(a5 + 4LL * result[1] + 1024);
          result[v10] = ~*(_BYTE *)(a5 + 4LL * *result);
        }
        v9 += 4;
        result += 4;
      }
      while ( (unsigned __int64)result < a3 );
    }
  }
  else if ( (unsigned __int64)result < a3 )
  {
    v7 = a4 + 1;
    v8 = a4 - (_QWORD)result;
    do
    {
      v7 += 4LL;
      *(_BYTE *)(v7 - 3) = ~*(_BYTE *)(a5 + 4LL * result[2] + 2048);
      *(_BYTE *)(v7 - 4) = ~*(_BYTE *)(a5 + 4LL * result[1] + 1024);
      result[v8] = ~*(_BYTE *)(a5 + 4LL * *result);
      result += 4;
    }
    while ( (unsigned __int64)result < a3 );
  }
  return result;
}
