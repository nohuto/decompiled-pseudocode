/*
 * XREFs of ZwQueryDirectoryFile @ 0x14041BE00
 * Callers:
 *     DifZwQueryDirectoryFileWrapper @ 0x140623F40 (DifZwQueryDirectoryFileWrapper.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     AslPathWildcardFindNext @ 0x140A1641C (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event);
}
