/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1403FA6A0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1402C722C (PspWow64ThunkProcessParameters.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F86E8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpStdExtendLowerWatermark @ 0x140585F1C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140586064 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x14058A6B4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14058A938 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14058B100 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x140594C00 (RtlpHpFixedHeapCommitRoutine.c)
 *     PspSetupUserProcessAddressSpace @ 0x14061177C (PspSetupUserProcessAddressSpace.c)
 *     EtwpFindUserBufferSpace @ 0x140646044 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x14064C4A8 (RtlCreateUserStack.c)
 *     MiCheckForUserStackOverflow @ 0x1406955F8 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x14069588C (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406AF9A8 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406B599C (PspSetupReservedUserMappings.c)
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140886D50 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x14090A318 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092582C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14092EC70 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140956110 (ExRaiseHardError.c)
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
