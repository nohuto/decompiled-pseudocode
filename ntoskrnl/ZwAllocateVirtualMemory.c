/*
 * XREFs of ZwAllocateVirtualMemory @ 0x140412610
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1402FC5B8 (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405A7300 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405A7440 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405AA9D8 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405AAC2C (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405AB400 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405AB4DC (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1405B44F0 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x1405EA7A0 (DifZwAllocateVirtualMemoryWrapper.c)
 *     EtwpFindUserBufferSpace @ 0x1406A1E50 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1406A3030 (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 *     PspSetupReservedUserMappings @ 0x140707AE8 (PspSetupReservedUserMappings.c)
 *     MiCheckForUserStackOverflow @ 0x14076B848 (MiCheckForUserStackOverflow.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x14078F9F0 (RtlpWow64CreateUserStack.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409AE7B0 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409CED84 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1409D9550 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
