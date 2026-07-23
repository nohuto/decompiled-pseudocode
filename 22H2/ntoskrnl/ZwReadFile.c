/*
 * XREFs of ZwReadFile @ 0x1403F9AE0
 * Callers:
 *     CmpDoFileRead @ 0x140320C7C (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C7D94 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140713648 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x14078A240 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14079A978 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407BEDE0 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1407C891C (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x140915430 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
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
  return KiServiceInternal(FileHandle);
}
