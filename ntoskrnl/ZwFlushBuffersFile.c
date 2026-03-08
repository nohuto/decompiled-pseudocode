/*
 * XREFs of ZwFlushBuffersFile @ 0x140412C70
 * Callers:
 *     CmpDoFileFlush @ 0x1402B3284 (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x1405EE050 (DifZwFlushBuffersFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x14073D77C (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A182CC (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140AA3140 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
