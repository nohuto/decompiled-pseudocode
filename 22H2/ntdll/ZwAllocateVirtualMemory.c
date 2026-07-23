/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18009D7E0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpCreateLowFragHeap @ 0x1800447E8 (RtlpCreateLowFragHeap.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F2C (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180048984 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     RtlAllocateHandle @ 0x180059A90 (RtlAllocateHandle.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180072908 (RtlpExtendLowFragHeapSegment.c)
 *     RtlCreateUserStack @ 0x180077310 (RtlCreateUserStack.c)
 *     RtlCreateMemoryZone @ 0x18007B760 (RtlCreateMemoryZone.c)
 *     EtwpInitializeCompression @ 0x180088038 (EtwpInitializeCompression.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009CD38 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D72C0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D88C8 (RtlpCommitQueryDebugInfo.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8960 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD76C (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDC64 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE048 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800DE694 (RtlResetStackOverflow.c)
 *     RtlValidateProcessHeaps @ 0x1800F31E0 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800F3320 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpValidateHeap @ 0x1800FA4A4 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FAA84 (RtlpValidateHeapHeaders.c)
 *     RtlStdInitializeStackDatabase @ 0x180101050 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1801014F4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1801015D4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x180102B00 (RtlpTraceDatabaseAllocate.c)
 *     PssNtCaptureSnapshot @ 0x180113B70 (PssNtCaptureSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114F0C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011529C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115A34 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011649C (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117138 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801176A0 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
