/*
 * XREFs of KeGetCurrentStackPointer @ 0x1404166E0
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140205D40 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeQueryCurrentStackInformation @ 0x1402E1E00 (KeQueryCurrentStackInformation.c)
 *     KasanWrapperRtlRestoreContext @ 0x1402EA9A0 (KasanWrapperRtlRestoreContext.c)
 *     RtlpGetStackLimits @ 0x1403129F0 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140315700 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140317800 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     EtwpTraceStackWalk @ 0x140460A6C (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140461546 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140560BE4 (PnprGetStackLimits.c)
 *     MiDoStackCopy @ 0x14062A990 (MiDoStackCopy.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140ABF490 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD5740 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140AE50D0 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
