/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403FA240
 * Callers:
 *     RtlAcquirePrivilege @ 0x14069434C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x14069DF2C (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140785C10 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
