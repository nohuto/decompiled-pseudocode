/*
 * XREFs of KeGetCurrentStackPointer @ 0x1403FDC50
 * Callers:
 *     RtlWalkFrameChain @ 0x14021CE70 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402AA760 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AA8C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpGetStackLimits @ 0x1402D0BE0 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x140340240 (KeQueryCurrentStackInformation.c)
 *     PnprGetStackLimits @ 0x14050F4B8 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140585C04 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x1405A7074 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B01F4 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1409C5C14 (MmVerifierTrimMemory.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C6400 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DEBA4 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
