/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14041AEC0
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x1405ECAF0 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D310C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1407DF4E0 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14080870C (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
