/*
 * XREFs of HalpGetCpuInfo @ 0x1403A0870
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A03AC (HalpCmciPollProcessor.c)
 *     HalpCmciSetProcessorConfig @ 0x1403A04F8 (HalpCmciSetProcessorConfig.c)
 *     HalpIsLmceSupported @ 0x1403A0648 (HalpIsLmceSupported.c)
 *     HalpGetCpuVendor @ 0x1403A083C (HalpGetCpuVendor.c)
 *     HalpProcGetFeatureBits @ 0x1403AF1CC (HalpProcGetFeatureBits.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C94D8 (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403CCA40 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403CD6AC (HalpTimerConfigureQpcBypass.c)
 *     HalpMcaInitializeErrorSection @ 0x1404BA530 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaReportError @ 0x1404BA9E0 (HalpMcaReportError.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404BC5E8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpCmciResetState @ 0x1404BCC20 (HalpCmciResetState.c)
 *     HalpIommuGetPageTableType @ 0x1404C96FC (HalpIommuGetPageTableType.c)
 *     HalpSetSystemInformation @ 0x140733730 (HalpSetSystemInformation.c)
 *     HalpIsCmciImplemented @ 0x140999C54 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x140999CC0 (HalpErrataApplyPerProcessor.c)
 *     HalpCmciInitProcessor @ 0x140999D10 (HalpCmciInitProcessor.c)
 *     HalpPiix4Detect @ 0x14099A3D0 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x14099E874 (HalpLbrInitialize.c)
 *     HalpMcaSetFeatureFlags @ 0x1409A10A4 (HalpMcaSetFeatureFlags.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A8618 (HalpDpPostReplaceInitialization.c)
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
