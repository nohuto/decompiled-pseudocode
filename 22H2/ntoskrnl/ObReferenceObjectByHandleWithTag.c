/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1407336A0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1402B0290 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x1403425EC (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x14053C1B8 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x140582860 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1405A4B40 (PspTimerDelayProcess.c)
 *     MiReferenceAweHandle @ 0x14064BD88 (MiReferenceAweHandle.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B37AB8 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)Handle,
           DesiredAccess,
           (__int64)ObjectType,
           AccessMode,
           Tag,
           Object,
           HandleInformation,
           0LL);
}
