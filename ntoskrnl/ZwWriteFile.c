/*
 * XREFs of ZwWriteFile @ 0x140412410
 * Callers:
 *     DifZwWriteFileWrapper @ 0x1405F6040 (DifZwWriteFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x14067F474 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x14069113C (EtwpRealtimeSaveBuffer.c)
 *     EtwpFlushBufferToLogfile @ 0x140691270 (EtwpFlushBufferToLogfile.c)
 *     CmpDoFileWrite @ 0x1406BC078 (CmpDoFileWrite.c)
 *     RtlpGetSetBootStatusData @ 0x14073D77C (RtlpGetSetBootStatusData.c)
 *     EtwpFinalizeHeader @ 0x140771D34 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreState @ 0x14084FCD8 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x140938EAC (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140939010 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140941244 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14094C450 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BAB20 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1409EAC60 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1409EB688 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1409EB858 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x1409FF53C (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x140A74198 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x140AB0E60 (KdpWriteFileCallback.c)
 *     BapdpProcessBCDCache @ 0x140B44668 (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B44AFC (BapdpProcessVsmKeyBlobs.c)
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
