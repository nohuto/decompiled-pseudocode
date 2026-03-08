/*
 * XREFs of HalpGetCpuVendor @ 0x14037D1B4
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x14037CC58 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciInitProcessor @ 0x14037CD68 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x14037CE58 (HalpCmciPollProcessor.c)
 *     HalpIsLmceSupported @ 0x14037CF24 (HalpIsLmceSupported.c)
 *     HalpCmcPollProcessor @ 0x14037CF58 (HalpCmcPollProcessor.c)
 *     HalpWheaWriteMsrStatus @ 0x14037D018 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x14037D060 (HalpWheaWriteMsrControl.c)
 *     HalpMcaProcessorBankConfig @ 0x14037D0B4 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaReadMsrStatus @ 0x14037D160 (HalpWheaReadMsrStatus.c)
 *     HalpMcaInitializeErrorSection @ 0x140501288 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaPopulateErrorData @ 0x14050135C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1405014E0 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x140501778 (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x14050376C (HalpCmciHandler.c)
 *     HalpMcaProcessorBankClear @ 0x140503EFC (HalpMcaProcessorBankClear.c)
 *     HalpMcaReadErrorCorrected @ 0x140503FDC (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140509010 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1405091B4 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x140516540 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x140516598 (HalpWheaReadMsrMisc.c)
 *     HaliWheaInitProcessorGenericSection @ 0x1405168A8 (HaliWheaInitProcessorGenericSection.c)
 *     HalpMcaSetFeatureFlags @ 0x140A8E900 (HalpMcaSetFeatureFlags.c)
 *     HalpIsCmciImplemented @ 0x140A8E988 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14037D1F0 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
