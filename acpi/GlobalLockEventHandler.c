/*
 * XREFs of GlobalLockEventHandler @ 0x1C0039690
 * Callers:
 *     <none>
 * Callees:
 *     ACPIAsyncAcquireGlobalLock @ 0x1C0039130 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C003937C (ACPIReleaseGlobalLock.c)
 */

__int64 __fastcall GlobalLockEventHandler(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( a2 )
  {
    if ( a2 == 1 )
      return ACPIReleaseGlobalLock(a5);
    else
      return 3221225485LL;
  }
  else
  {
    *(_QWORD *)a5 = a4;
    *(_WORD *)(a5 + 8) = 2;
    return ACPIAsyncAcquireGlobalLock(a5);
  }
}
