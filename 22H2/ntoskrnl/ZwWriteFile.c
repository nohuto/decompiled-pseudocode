/*
 * XREFs of ZwWriteFile @ 0x1403F9B20
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x14068E954 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406A1ABC (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeSaveState @ 0x1406A5D48 (EtwpRealtimeSaveState.c)
 *     CmpDoFileWrite @ 0x1406EA3AC (CmpDoFileWrite.c)
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140713648 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x14078A240 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1407C891C (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x140889808 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140889968 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140890F14 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140898B0C (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409155F8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CEC4 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140948CDC (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x140949708 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1409498CC (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140958B00 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x140983128 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x1409B6FA0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4083C (BapdpProcessVsmKeyBlobs.c)
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
