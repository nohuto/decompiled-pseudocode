/*
 * XREFs of SmcProcessDeleteRequest @ 0x14092ABA0
 * Callers:
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SmcCacheDelete @ 0x14092D5CC (SmcCacheDelete.c)
 */

__int64 __fastcall SmcProcessDeleteRequest(__int64 a1, __int64 *a2, int a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // rax

  if ( a3 != 8 )
    return 3221225990LL;
  if ( a4 && ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *a2;
  if ( (unsigned __int8)*a2 != 1 || (v5 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  result = SmcCacheDelete(a1, HIDWORD(v5));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
