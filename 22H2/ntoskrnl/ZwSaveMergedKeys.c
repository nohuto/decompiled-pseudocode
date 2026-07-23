/*
 * XREFs of ZwSaveMergedKeys @ 0x1403FCAE0
 * Callers:
 *     NtSaveMergedKeys @ 0x1408697F0 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
