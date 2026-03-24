/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403FABC0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406B118C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406BABEC (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140785D10 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
