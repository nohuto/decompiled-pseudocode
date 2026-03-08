/*
 * XREFs of ZwQueryDirectoryFile @ 0x1404129B0
 * Callers:
 *     DifZwQueryDirectoryFileWrapper @ 0x1405F18A0 (DifZwQueryDirectoryFileWrapper.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14087FA04 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     AslPathWildcardFindNext @ 0x140A52E68 (AslPathWildcardFindNext.c)
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
