/*
 * XREFs of ZwWriteFile @ 0x1403FA4A0
 * Callers:
 *     CmpDoFileWrite @ 0x1406715BC (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1406AB9A4 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406BEE5C (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeSaveState @ 0x1406C340C (EtwpRealtimeSaveState.c)
 *     EtwpFinalizeHeader @ 0x1406DF770 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406DFDA8 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x14078A340 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1407C89FC (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x1408897B8 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140889918 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140890EC4 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140898ABC (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409155A8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CE74 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140948C8C (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1409496B8 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x14094987C (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140958AB0 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x1409830D8 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x1409B6FA0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4140C (BapdpProcessVsmKeyBlobs.c)
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
