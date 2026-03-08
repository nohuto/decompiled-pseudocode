/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140205C20
 * Callers:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     RtlGetCallersAddress @ 0x1403BCC70 (RtlGetCallersAddress.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1405A70F4 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x1405B2C54 (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x1405B581C (SepGetStackTraceHash.c)
 *     CarInitializeTelemetryData @ 0x1405D1970 (CarInitializeTelemetryData.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 *     MiAddMdlTracker @ 0x14061A0AC (MiAddMdlTracker.c)
 *     MiShowBadMapper @ 0x14062EC9C (MiShowBadMapper.c)
 *     MiInsertPteTracker @ 0x14065EDA4 (MiInsertPteTracker.c)
 *     CmpLogDirtyVectorUse @ 0x1406918DC (CmpLogDirtyVectorUse.c)
 *     ViKeIrqlLogCommon @ 0x140ABD682 (ViKeIrqlLogCommon.c)
 *     IovpLogStackCallout @ 0x140ABEDD0 (IovpLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x140ACE828 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x140AD0CE4 (VfCheckUserHandle.c)
 *     ViFaultsInjectionNotification @ 0x140AD3958 (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD4738 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 *     ViPtLogStackCallout @ 0x140ADBF00 (ViPtLogStackCallout.c)
 *     ViIrqlLogCRStackTrace @ 0x140AE5594 (ViIrqlLogCRStackTrace.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140205CA0 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  unsigned int i; // ecx
  __int64 v13; // rax

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  v10 = 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
