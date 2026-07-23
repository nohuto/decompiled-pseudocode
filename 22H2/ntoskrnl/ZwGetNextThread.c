/*
 * XREFs of ZwGetNextThread @ 0x1403FB940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
