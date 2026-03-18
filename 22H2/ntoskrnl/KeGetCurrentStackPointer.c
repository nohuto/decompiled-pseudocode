/*
 * XREFs of KeGetCurrentStackPointer @ 0x14041EA70
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227820 (RtlEnoughStackSpaceForStackCapture.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14022E7D0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x14022E980 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271270 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x14034E3B0 (KeQueryCurrentStackInformation.c)
 *     KasanWrapperRtlRestoreContext @ 0x1403565D0 (KasanWrapperRtlRestoreContext.c)
 *     EtwpTraceStackWalk @ 0x14046896C (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140469446 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140563084 (PnprGetStackLimits.c)
 *     MiDoStackCopy @ 0x14062CE10 (MiDoStackCopy.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140AC3490 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD9740 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140AE90D0 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
