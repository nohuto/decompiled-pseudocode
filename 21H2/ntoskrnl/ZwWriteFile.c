/*
 * XREFs of ZwWriteFile @ 0x14041B860
 * Callers:
 *     DifZwWriteFileWrapper @ 0x140628830 (DifZwWriteFileWrapper.c)
 *     EtwpFlushBufferToLogfile @ 0x1406C1524 (EtwpFlushBufferToLogfile.c)
 *     RtlpGetSetBootStatusData @ 0x1406D6860 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeSaveState @ 0x1406EA4C0 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406ED114 (EtwpRealtimeSaveBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     CmpDoFileWrite @ 0x140714594 (CmpDoFileWrite.c)
 *     EtwpRealtimeRestoreState @ 0x1408570CC (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14092C1F8 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14092C358 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140933C14 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14093D4CC (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BABB4 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1409ED100 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1409EDB30 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1409EDCF4 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140A047F0 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x140A37128 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x140A72D50 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B1C49C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessBCDCache @ 0x140B1C78C (BapdpProcessBCDCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
