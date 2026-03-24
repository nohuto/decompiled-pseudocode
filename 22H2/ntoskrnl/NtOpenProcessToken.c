/*
 * XREFs of NtOpenProcessToken @ 0x140653D30
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x140653D50 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
