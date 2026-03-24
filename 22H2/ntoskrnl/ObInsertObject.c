/*
 * XREFs of ObInsertObject @ 0x140701A90
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x14035A570 (FsRtlCreateSectionForDataScan.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x14071E360 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     TtmpDispatchCreateEventQueue @ 0x140900B8C (TtmpDispatchCreateEventQueue.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094798C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095A5AC (ExpProfileCreate.c)
 *     PspInitPhase1 @ 0x140A4B338 (PspInitPhase1.c)
 *     MiSectionInitialization @ 0x140A55074 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
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
           (PADAPTER_OBJECT)Object,
           PassedAccessState,
           DesiredAccess,
           ObjectPointerBias,
           0,
           (__int64)NewObject,
           (unsigned __int64 *)Handle);
}
