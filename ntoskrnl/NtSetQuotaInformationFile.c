/*
 * XREFs of NtSetQuotaInformationFile @ 0x140948A60
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  return IopSetEaOrQuotaInformationFile(FileHandle, (unsigned __int64)IoStatusBlock, Buffer, Length, v5);
}
