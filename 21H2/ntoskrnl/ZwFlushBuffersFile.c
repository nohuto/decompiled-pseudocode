/*
 * XREFs of ZwFlushBuffersFile @ 0x14041C0C0
 * Callers:
 *     CmpDoFileFlush @ 0x140258000 (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1403B6BDC (RtlBootStatusDisableFlushing.c)
 *     DifZwFlushBuffersFileWrapper @ 0x1406205A0 (DifZwFlushBuffersFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1406D6860 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x1409180B0 (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140A51F50 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
