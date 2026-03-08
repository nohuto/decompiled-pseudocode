/*
 * XREFs of PspInterlockedMaxQuota @ 0x140311E80
 * Callers:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PspInterlockedMaxQuota(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8

  _m_prefetchw(a1);
  result = *a1;
  if ( a2 > *a1 )
  {
    do
    {
      v3 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, a2, result);
    }
    while ( result != v3 && a2 > result );
  }
  return result;
}
