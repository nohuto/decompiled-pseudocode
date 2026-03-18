/*
 * XREFs of NtSetIntervalProfile @ 0x140A04670
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x1409751C8 (KeSetIntervalProfile.c)
 */

__int64 __fastcall NtSetIntervalProfile(int a1, int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
