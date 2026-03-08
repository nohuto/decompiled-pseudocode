/*
 * XREFs of PspCloseActivityReference @ 0x1407FCDF0
 * Callers:
 *     <none>
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x140711BD0 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PspCloseActivityReference(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    if ( *a2 )
      return PsReleaseProcessWakeCounter(*a2);
  }
  return result;
}
