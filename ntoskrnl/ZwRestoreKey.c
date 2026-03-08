/*
 * XREFs of ZwRestoreKey @ 0x1404153F0
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x1405F40A0 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle);
}
