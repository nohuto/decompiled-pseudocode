/*
 * XREFs of ZwWriteFile @ 0x1403FA680
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x14060A094 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x14061DF4C (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeSaveState @ 0x140622014 (EtwpRealtimeSaveState.c)
 *     CmpDoFileWrite @ 0x1406A362C (CmpDoFileWrite.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B7088 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x14078A500 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1407C8D1C (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x140889918 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140889A78 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140891024 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140898C1C (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140915708 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140948E5C (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x140949888 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x140949A4C (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140958C80 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x1409832B8 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x1409B7FA0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4240C (BapdpProcessVsmKeyBlobs.c)
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
  return KiServiceInternal(FileHandle);
}
