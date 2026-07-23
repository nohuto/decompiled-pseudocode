/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1403F9D20
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14032068C (PspWow64ThunkProcessParameters.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F7D74 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpStdExtendLowerWatermark @ 0x140585E5C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140585FA4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x14058A5F4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14058A878 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14058B040 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x140594B40 (RtlpHpFixedHeapCommitRoutine.c)
 *     PspSetupUserProcessAddressSpace @ 0x140611BDC (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x140679A18 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x140679CAC (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x140692B5C (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x14069895C (PspSetupReservedUserMappings.c)
 *     EtwpFindUserBufferSpace @ 0x1406BEE00 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1406C5268 (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x14090A368 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092587C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14092ECC0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140956160 (ExRaiseHardError.c)
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
  return KiServiceInternal(ProcessHandle);
}
