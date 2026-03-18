/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140227700
 * Callers:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     RtlGetCallersAddress @ 0x1403C25A0 (RtlGetCallersAddress.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1405A9584 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x1405B5104 (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x1405B7CCC (SepGetStackTraceHash.c)
 *     CarInitializeTelemetryData @ 0x1405D3E20 (CarInitializeTelemetryData.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8954 (DifGetReturnAddressForWrappers.c)
 *     MiAddMdlTracker @ 0x14061C55C (MiAddMdlTracker.c)
 *     MiShowBadMapper @ 0x14063112C (MiShowBadMapper.c)
 *     MiInsertPteTracker @ 0x1406613F4 (MiInsertPteTracker.c)
 *     CmpLogDirtyVectorUse @ 0x1406BBF28 (CmpLogDirtyVectorUse.c)
 *     ViKeIrqlLogCommon @ 0x140AC1682 (ViKeIrqlLogCommon.c)
 *     IovpLogStackCallout @ 0x140AC2DD0 (IovpLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x140AD2828 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x140AD4CE4 (VfCheckUserHandle.c)
 *     ViFaultsInjectionNotification @ 0x140AD7958 (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x140AD7DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD8738 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 *     ViPtLogStackCallout @ 0x140ADFF00 (ViPtLogStackCallout.c)
 *     ViIrqlLogCRStackTrace @ 0x140AE9594 (ViIrqlLogCRStackTrace.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140227780 (RtlWalkFrameChain.c)
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
