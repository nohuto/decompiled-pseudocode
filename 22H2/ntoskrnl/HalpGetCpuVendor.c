/*
 * XREFs of HalpGetCpuVendor @ 0x1403A083C
 * Callers:
 *     HalpWheaReadMsrStatus @ 0x1403A071C (HalpWheaReadMsrStatus.c)
 *     HalpWheaWriteMsrStatus @ 0x1403A0770 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x1403A07B8 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrControl @ 0x1403A07E8 (HalpWheaWriteMsrControl.c)
 *     HalpMcaClearError @ 0x1404BA238 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x1404BA5CC (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1404BA760 (HalpMcaReadError.c)
 *     HalpMcaReadErrorCorrected @ 0x1404BD2C0 (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C1FD0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404C2128 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x1404CF700 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x1404CF758 (HalpWheaReadMsrMisc.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A0870 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
