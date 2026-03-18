/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14041BA60
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x140250368 (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405E4A4C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405E4B98 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405E9C3C (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405E9E8C (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405EA650 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA72C (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1405F3190 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x14061CBB0 (DifZwAllocateVirtualMemoryWrapper.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1406B42F4 (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406C9D2C (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406D94F0 (PspSetupReservedUserMappings.c)
 *     EtwpFindUserBufferSpace @ 0x140799140 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1407E4A98 (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409AF8C4 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409CF0D0 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1409D91B0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
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
