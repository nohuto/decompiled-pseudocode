/*
 * XREFs of ZwReadFile @ 0x1403FA460
 * Callers:
 *     CmpDoFileRead @ 0x1402C781C (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C83C4 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x1406DF770 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406DFDA8 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x14078A340 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140790718 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407BE620 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1407C89FC (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x1409153E0 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
