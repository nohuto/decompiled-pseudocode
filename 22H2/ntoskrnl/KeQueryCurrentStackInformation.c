/*
 * XREFs of KeQueryCurrentStackInformation @ 0x140340240
 * Callers:
 *     RtlpWalkFrameChain @ 0x14021D210 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x14033E580 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x140340838 (RtlpIsFrameInBoundsEx.c)
 *     PnprGetStackLimits @ 0x14050F4B8 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x1405A7074 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405AECB8 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B01F4 (EtwpTraceLastBranchRecord.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C6400 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DEBA4 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402D0C30 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FDC50 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(char *a1, struct _KPRCB **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
