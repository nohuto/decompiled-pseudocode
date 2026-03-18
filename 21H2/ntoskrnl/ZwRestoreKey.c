/*
 * XREFs of ZwRestoreKey @ 0x14041E7E0
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x1406267D0 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle);
}
