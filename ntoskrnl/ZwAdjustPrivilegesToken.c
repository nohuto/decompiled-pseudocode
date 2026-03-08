/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x140412B30
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x1405EA640 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlAcquirePrivilege @ 0x140783964 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140790154 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14082F868 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
