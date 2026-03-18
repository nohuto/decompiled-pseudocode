/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14041BF80
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x14061CA40 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlAcquirePrivilege @ 0x1406CB6DC (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406DAE08 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140813C34 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
