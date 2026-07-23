/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1403FA880
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14024596C (PspWow64ThunkProcessParameters.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F8718 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpStdExtendLowerWatermark @ 0x14058614C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140586294 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x14058A8E4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14058AB68 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14058B330 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x140594E30 (RtlpHpFixedHeapCommitRoutine.c)
 *     MiCheckForUserStackOverflow @ 0x1405F4B48 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x1405F4DDC (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x14060E248 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x140614E58 (PspSetupReservedUserMappings.c)
 *     EtwpFindUserBufferSpace @ 0x14063AE30 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1406412C8 (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140886EB0 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x14090A478 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092598C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14092EDD0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
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
