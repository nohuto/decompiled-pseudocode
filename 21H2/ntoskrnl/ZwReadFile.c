/*
 * XREFs of ZwReadFile @ 0x14041B820
 * Callers:
 *     CmpDoFileRead @ 0x1402509C4 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403D8BC0 (RtlInitializeBootStatDataCache.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E880 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwReadFileWrapper @ 0x140625FF0 (DifZwReadFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1406D6860 (RtlpGetSetBootStatusData.c)
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140828810 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14084BFF4 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1408570CC (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x1409BA9F0 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
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
