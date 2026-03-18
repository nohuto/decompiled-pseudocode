/*
 * XREFs of HalpGetCpuVendor @ 0x140380C44
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x1403806E8 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciInitProcessor @ 0x1403807F8 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x1403808E8 (HalpCmciPollProcessor.c)
 *     HalpIsLmceSupported @ 0x1403809B4 (HalpIsLmceSupported.c)
 *     HalpCmcPollProcessor @ 0x1403809E8 (HalpCmcPollProcessor.c)
 *     HalpWheaWriteMsrStatus @ 0x140380AA8 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x140380AF0 (HalpWheaWriteMsrControl.c)
 *     HalpMcaProcessorBankConfig @ 0x140380B44 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaReadMsrStatus @ 0x140380BF0 (HalpWheaReadMsrStatus.c)
 *     HalpMcaInitializeErrorSection @ 0x140503368 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaPopulateErrorData @ 0x14050343C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1405035C0 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x140503858 (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x14050584C (HalpCmciHandler.c)
 *     HalpMcaProcessorBankClear @ 0x140505FDC (HalpMcaProcessorBankClear.c)
 *     HalpMcaReadErrorCorrected @ 0x1405060BC (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050B0F0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050B294 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x140518A70 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x140518AC8 (HalpWheaReadMsrMisc.c)
 *     HaliWheaInitProcessorGenericSection @ 0x140518DD8 (HaliWheaInitProcessorGenericSection.c)
 *     HalpMcaSetFeatureFlags @ 0x140A91B60 (HalpMcaSetFeatureFlags.c)
 *     HalpIsCmciImplemented @ 0x140A91BE8 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140380C80 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
