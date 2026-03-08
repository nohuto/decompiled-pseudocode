/*
 * XREFs of ObInsertObject @ 0x1407F0A20
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B8EEC (PopPowerRequestCreateUserModeRequest.c)
 *     FsRtlCreateSectionForDataScan @ 0x140368300 (FsRtlCreateSectionForDataScan.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     EtwpCreateUmReplyObject @ 0x14078BE14 (EtwpCreateUmReplyObject.c)
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x14084F34C (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x140855B00 (PspAllocatePartition.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A3450 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     PspInitPhase1 @ 0x140B422C8 (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B42590 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140B6D268 (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(
           (char *)Object,
           PassedAccessState,
           DesiredAccess,
           ObjectPointerBias,
           0,
           (__int64)NewObject,
           Handle);
}
