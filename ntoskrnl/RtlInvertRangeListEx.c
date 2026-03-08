/*
 * XREFs of RtlInvertRangeListEx @ 0x14081F400
 * Callers:
 *     RtlInvertRangeList @ 0x14081F210 (RtlInvertRangeList.c)
 *     ArbInitializeRangeList @ 0x1409331D0 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlAddRange @ 0x14081F540 (RtlAddRange.c)
 */

__int64 __fastcall RtlInvertRangeListEx(int a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 result; // rax

  v6 = 0;
  v7 = a4;
  v10 = 0LL;
  if ( *(_DWORD *)(a2 + 20) )
  {
    v11 = (unsigned __int64 *)(*(_QWORD *)a2 - 40LL);
    if ( a2 == *(_QWORD *)a2 )
    {
      return 0LL;
    }
    else
    {
      while ( 1 )
      {
        if ( *v11 > v10 )
        {
          LOBYTE(a4) = a3;
          result = RtlAddRange(a1, v10, (unsigned int)*v11 - 1, a4, 0, v7, a5);
          if ( (int)result < 0 )
            break;
        }
        v12 = v11[5];
        v10 = v11[1] + 1;
        v11 = (unsigned __int64 *)(v12 - 40);
        if ( a2 == v12 )
        {
          if ( !v10 )
            return 0LL;
          LOBYTE(a4) = a3;
          v13 = RtlAddRange(a1, v10, -1, a4, 0, v7, a5);
          if ( v13 < 0 )
            return (unsigned int)v13;
          return v6;
        }
      }
    }
  }
  else
  {
    LOBYTE(a4) = a3;
    return RtlAddRange(a1, 0, -1, a4, 0, v7, a5);
  }
  return result;
}
