/*
 * XREFs of ZwFreeVirtualMemory @ 0x1404126D0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402E88D8 (SepRmDispatchDataToLsa.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AA41C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405AA9D8 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405AAE88 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405AB400 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x1405EE4F0 (DifZwFreeVirtualMemoryWrapper.c)
 *     PspSetupUserStack @ 0x1406A2EF8 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1406A3030 (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x140754DEC (WbFreeMemoryBlock.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x14078F9F0 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x140799590 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x14079A780 (RtlDestroyHeap.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1409BB3E0 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409CED84 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1409ED07C (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
