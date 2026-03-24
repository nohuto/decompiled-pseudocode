/*
 * XREFs of ZwFreeVirtualMemory @ 0x1403FA760
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402C1C08 (SepRmDispatchDataToLsa.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F86E8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A0E4 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14058A6B4 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14058AB94 (RtlpFreeHeap.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PspSetupUserStack @ 0x14064C384 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x14064C4A8 (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x140687F88 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406AF9A8 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406BECD8 (PspDeleteUserStack.c)
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140772B30 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140886D50 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140915E04 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092582C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x140941BDC (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140956110 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
