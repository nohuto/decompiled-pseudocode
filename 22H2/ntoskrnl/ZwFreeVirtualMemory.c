/*
 * XREFs of ZwFreeVirtualMemory @ 0x1403F9DE0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14034D558 (SepRmDispatchDataToLsa.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F7D74 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A024 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14058A5F4 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14058AAD4 (RtlpFreeHeap.c)
 *     WbFreeMemoryBlock @ 0x140667C48 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x140692B5C (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406A1938 (PspDeleteUserStack.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     PspSetupUserStack @ 0x1406C5144 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1406C5268 (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407727F0 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140915E54 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092587C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x140941C2C (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140956160 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
