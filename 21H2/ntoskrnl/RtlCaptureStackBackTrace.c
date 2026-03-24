/*
 * XREFs of RtlCaptureStackBackTrace @ 0x14021CE20
 * Callers:
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x14052D1EC (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x140530854 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x14055EDE0 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x140585D10 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x140588940 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x14059392C (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x140596110 (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x1405A2188 (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x140721BE0 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x1409C5940 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x1409D5764 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x1409DA184 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x1409DC0CC (ViKeIrqlLogCommon.c)
 *     ViFaultsInjectionNotification @ 0x1409DD17C (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x1409DD5C8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1409DE1B4 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DE338 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14021CEB0 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v6; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // edx
  unsigned int i; // ecx
  ULONG v12; // r8d
  __int64 v13; // rax

  v6 = FramesToCapture;
  if ( FramesToCapture > 0xFFFF )
    v6 = 0xFFFF;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v7 + v6, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    v12 = 0;
    for ( i = 0; i < v6; v12 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v12;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
