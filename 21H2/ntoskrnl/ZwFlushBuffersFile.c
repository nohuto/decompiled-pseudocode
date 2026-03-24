/*
 * XREFs of ZwFlushBuffersFile @ 0x1403FAD00
 * Callers:
 *     CmpDoFileFlush @ 0x140361D88 (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7A00 (RtlBootStatusDisableFlushing.c)
 *     RtlpGetSetBootStatusData @ 0x14078A340 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x14086D9C8 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087162C (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140997FA0 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
