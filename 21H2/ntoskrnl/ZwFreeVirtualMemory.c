/*
 * XREFs of ZwFreeVirtualMemory @ 0x1403FA940
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402400A8 (SepRmDispatchDataToLsa.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F8718 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A314 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14058A8E4 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14058ADC4 (RtlpFreeHeap.c)
 *     WbFreeMemoryBlock @ 0x1405E70E8 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x14060E248 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x14061DDC8 (PspDeleteUserStack.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspSetupUserStack @ 0x1406411A4 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1406412C8 (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140772CF0 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140886EB0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140915F64 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092598C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x140941DAC (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
