/*
 * XREFs of ZwQueryEaFile @ 0x140414CD0
 * Callers:
 *     DifZwQueryEaFileWrapper @ 0x1405F1CF0 (DifZwQueryEaFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
