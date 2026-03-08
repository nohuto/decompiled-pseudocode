/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1406D8E50
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140247A20 (SepReferenceTokenByHandle.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x140300AA4 (PopCreatePowerThread.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     DbgkCaptureLiveKernelDump @ 0x140539CE8 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x140580330 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1405A2690 (PspTimerDelayProcess.c)
 *     MiReferenceAweHandle @ 0x14064976C (MiReferenceAweHandle.c)
 *     MmPrefetchVirtualMemory @ 0x14067E690 (MmPrefetchVirtualMemory.c)
 *     PspCreateThread @ 0x1406B1908 (PspCreateThread.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     PopPowerRequestActionInfo @ 0x14073ACE4 (PopPowerRequestActionInfo.c)
 *     PopEtEnergyTrackerQuery @ 0x140767578 (PopEtEnergyTrackerQuery.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1407C4C00 (MiAllocateVirtualMemoryPrepare.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14097E9DC (PopPowerRequestSpecialRequestSet.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B698FC (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
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
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
