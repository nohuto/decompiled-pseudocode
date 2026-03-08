/*
 * XREFs of OutputAATo8BPP_MONO @ 0x1C025BE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo8BPP_MONO(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8,
        __int16 a9)
{
  __int64 result; // rax
  unsigned __int8 *v10; // r10
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8

  result = *a1;
  v10 = (unsigned __int8 *)(a2 + 4);
  if ( (result & 0x80u) == 0LL )
  {
    if ( (unsigned __int64)v10 < a3 )
    {
      v13 = a6;
      do
      {
        result = *(unsigned __int16 *)(v13 + 2);
        v13 += 6LL;
        *a4++ = HIBYTE(a9) ^ (((unsigned __int16)wGrayIdxLB[*v10] + dwGrayIdxHB[v10[1]] - (unsigned int)result) >> 12);
        if ( v13 >= a7 )
        {
          result = a8;
          v13 += a8;
        }
        v10 += 4;
      }
      while ( (unsigned __int64)v10 < a3 );
    }
  }
  else if ( (unsigned __int64)v10 < a3 )
  {
    v12 = a6;
    do
    {
      if ( v10[3] )
      {
        result = *(unsigned __int16 *)(v12 + 2);
        *a4 = HIBYTE(a9) ^ (((unsigned __int16)wGrayIdxLB[*v10] + dwGrayIdxHB[v10[1]] - (unsigned int)result) >> 12);
      }
      ++a4;
      v12 += 6LL;
      if ( v12 >= a7 )
      {
        result = a8;
        v12 += a8;
      }
      v10 += 4;
    }
    while ( (unsigned __int64)v10 < a3 );
  }
  return result;
}
