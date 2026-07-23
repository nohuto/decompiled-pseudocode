/*
 * XREFs of ZwResetWriteWatch @ 0x1403FD4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
