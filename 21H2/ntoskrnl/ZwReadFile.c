/*
 * XREFs of ZwReadFile @ 0x1403FA640
 * Callers:
 *     CmpDoFileRead @ 0x140245F5C (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C8564 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B7088 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x14078A500 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140791CC8 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407BEDB0 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1407C8D1C (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x140915540 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
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
