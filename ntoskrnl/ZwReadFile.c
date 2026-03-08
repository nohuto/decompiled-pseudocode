/*
 * XREFs of ZwReadFile @ 0x1404123D0
 * Callers:
 *     CmpDoFileRead @ 0x1402F6880 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403A4724 (RtlInitializeBootStatDataCache.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055BD40 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwReadFileWrapper @ 0x1405F3900 (DifZwReadFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x14073D77C (RtlpGetSetBootStatusData.c)
 *     EtwpFinalizeHeader @ 0x140771D34 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14083F64C (EtwpRealtimeRestoreBuffer.c)
 *     RtlCheckBootStatusIntegrity @ 0x14084B14C (RtlCheckBootStatusIntegrity.c)
 *     EtwpRealtimeRestoreState @ 0x14084FCD8 (EtwpRealtimeRestoreState.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14085A8FC (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
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
