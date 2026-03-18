/*
 * XREFs of ??0EnterLeaveCritByVelocityWithDispositionOverride@@QEAA@W4CritOptType@@_NW4HandleToObjILCheck@@@Z @ 0x1C0024E9C
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0024770 (NtUserSetWindowsHookEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterLeaveCritByVelocityWithDispositionOverride::EnterLeaveCritByVelocityWithDispositionOverride(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4)
{
  if ( a3 || !(unsigned __int8)ShouldRunShared(5LL) )
    EnterCrit(0LL, a4);
  else
    EnterSharedCrit();
  return a1;
}
