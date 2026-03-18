/*
 * XREFs of NtOpenProcessToken @ 0x1407C5500
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x140737BD0 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
