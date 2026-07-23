/*
 * XREFs of ZwFlushBuffersFile @ 0x1403FAEE0
 * Callers:
 *     CmpDoFileFlush @ 0x1402F7D80 (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7B50 (RtlBootStatusDisableFlushing.c)
 *     RtlpGetSetBootStatusData @ 0x14078A500 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087178C (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140998FA0 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
