/*
 * XREFs of NtOpenProcessToken @ 0x1407769B0
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x1407C95D0 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
