/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1402E1E00
 * Callers:
 *     RtlDispatchException @ 0x14027FA60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x140282250 (RtlpIsFrameInBoundsEx.c)
 *     EtwpTraceStackWalk @ 0x140460A6C (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140461546 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140560BE4 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140600FD8 (EtwpCovSampCaptureKernelStack.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140ABF490 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD5740 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140312A40 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1404166E0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
