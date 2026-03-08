/*
 * XREFs of HalpGetCpuInfo @ 0x14037D1F0
 * Callers:
 *     HalpIommuGetPageTableType @ 0x14037CA10 (HalpIommuGetPageTableType.c)
 *     HalpProcGetFeatureBits @ 0x14037CB74 (HalpProcGetFeatureBits.c)
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     HalpInterruptIsMsiSupported @ 0x14037D4DC (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403ACA80 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403ADC54 (HalpTimerConfigureQpcBypass.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405030E4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpSetSystemInformation @ 0x14085AF10 (HalpSetSystemInformation.c)
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 *     HalpErrataApplyPerProcessor @ 0x140A87B18 (HalpErrataApplyPerProcessor.c)
 *     HalpLbrInitialize @ 0x140A8E07C (HalpLbrInitialize.c)
 *     HalpDpPostReplaceInitialization @ 0x140A94574 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpGetCpuInfo(char *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  struct _KPRCB *CurrentPrcb; // r10

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 0;
  if ( a1 )
    *a1 = CurrentPrcb->CpuType;
  if ( a2 )
    *a2 = CurrentPrcb->CpuStepping;
  if ( a3 )
    *a3 = CurrentPrcb->CpuModel;
  if ( a4 )
    *a4 = CurrentPrcb->CpuVendor;
  return 1;
}
