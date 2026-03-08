/*
 * XREFs of HalpIsCmciImplemented @ 0x140A8E988
 * Callers:
 *     HalpInitializeCmc @ 0x140A87F7C (HalpInitializeCmc.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A8E8A4 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpMcaSetFeatureFlags @ 0x140A8E900 (HalpMcaSetFeatureFlags.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A9218C (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     HalpInterruptIsCmciSupported @ 0x1403A99D0 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405030E4 (HalpInterruptIsDeferredErrorSupported.c)
 */

char HalpIsCmciImplemented()
{
  char CpuVendor; // al
  bool IsCmciSupported; // bl
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !HalpCmciImplementationChecked )
  {
    CpuVendor = HalpGetCpuVendor();
    if ( CpuVendor == 2 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
    }
    else if ( CpuVendor == 1 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
      if ( IsCmciSupported )
        HalpDeferredErrorInterruptPresent = HalpInterruptIsDeferredErrorSupported();
    }
    else
    {
      IsCmciSupported = 0;
    }
    HalpCmciImplementationPresent = IsCmciSupported;
    _InterlockedOr(v3, 0);
    HalpCmciImplementationChecked = 1;
  }
  return HalpCmciImplementationPresent;
}
