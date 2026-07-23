/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009D8A0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlpHpVaMgrRangeFree @ 0x1800047B4 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180004F78 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x180005248 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180006040 (RtlpHpVaMgrRegionAllocate.c)
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F2C (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180048984 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     RtlpInitParameterBlock @ 0x18007DBF8 (RtlpInitParameterBlock.c)
 *     RtlFreeUserStack @ 0x18007FFE0 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180085550 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180085A70 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x180088340 (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x1800CCB10 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CCC20 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D72C0 (RtlCreateQueryDebugBuffer.c)
 *     WerReportExceptionWorker @ 0x1800DD6C0 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800DDA7C (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDC64 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE048 (WerEscalationLazyInit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x180101010 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x180101050 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x180102B4C (RtlpTraceDatabaseFree.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801140C0 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x1801142D0 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114F0C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011529C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115A34 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x180116A1C (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117138 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801176A0 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
