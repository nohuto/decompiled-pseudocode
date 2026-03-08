/*
 * XREFs of ZwSetEaFile @ 0x1404156D0
 * Callers:
 *     DifZwSetEaFileWrapper @ 0x1405F4650 (DifZwSetEaFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
