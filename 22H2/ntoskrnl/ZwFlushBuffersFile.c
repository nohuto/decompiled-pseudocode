/*
 * XREFs of ZwFlushBuffersFile @ 0x1403FA380
 * Callers:
 *     CmpDoFileFlush @ 0x140361458 (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7300 (RtlBootStatusDisableFlushing.c)
 *     RtlpGetSetBootStatusData @ 0x14078A240 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x14086DA18 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087167C (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140997F90 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
