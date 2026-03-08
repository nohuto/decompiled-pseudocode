/*
 * XREFs of NtSetIntervalProfile @ 0x140A01980
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x140972128 (KeSetIntervalProfile.c)
 */

__int64 __fastcall NtSetIntervalProfile(int a1, int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
