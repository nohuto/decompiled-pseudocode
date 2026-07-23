/*
 * XREFs of RtlInvertRangeListEx @ 0x1407B7E80
 * Callers:
 *     RtlInvertRangeList @ 0x1407B7E50 (RtlInvertRangeList.c)
 *     ArbInitializeRangeList @ 0x140867210 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlAddRange @ 0x1407645D0 (RtlAddRange.c)
 */

__int64 __fastcall RtlInvertRangeListEx(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rdi
  __int64 result; // rax

  v7 = 0LL;
  if ( !*(_DWORD *)(a2 + 20) )
    return RtlAddRange(a1, 0LL, 0xFFFFFFFFFFFFFFFFuLL, a3, 0, a4, a5);
  v10 = *(_QWORD *)a2;
  while ( 1 )
  {
    v11 = (unsigned __int64 *)(v10 - 40);
    if ( a2 == v10 )
      break;
    if ( *v11 > v7 )
    {
      result = RtlAddRange(a1, v7, *v11 - 1, a3, 0, a4, a5);
      if ( (int)result < 0 )
        return result;
    }
    v10 = v11[5];
    v7 = v11[1] + 1;
  }
  if ( !v7 )
    return 0LL;
  result = RtlAddRange(a1, v7, 0xFFFFFFFFFFFFFFFFuLL, a3, 0, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
