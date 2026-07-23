/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403FADA0
 * Callers:
 *     RtlAcquirePrivilege @ 0x14061013C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140619EC0 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140785ED0 (BiAdjustPrivilege.c)
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
