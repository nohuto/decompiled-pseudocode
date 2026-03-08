/*
 * XREFs of NtQueryDirectoryFile @ 0x140780770
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDirectoryFileEx @ 0x1406B2200 (NtQueryDirectoryFileEx.c)
 */

NTSTATUS __stdcall NtQueryDirectoryFile(
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
  char v11; // r10
  SIZE_T v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]

  v11 = (ReturnSingleEntry != 0 ? 2 : 0) | 1;
  if ( !RestartScan )
    v11 = ReturnSingleEntry != 0 ? 2 : 0;
  LODWORD(v14) = FileInformationClass;
  LODWORD(v13) = Length;
  return NtQueryDirectoryFileEx(
           (int)FileHandle,
           (int)Event,
           (int)ApcRoutine,
           (int)ApcContext,
           (__int64)IoStatusBlock,
           FileInformation,
           v13,
           v14,
           v11,
           (__int64)FileName);
}
