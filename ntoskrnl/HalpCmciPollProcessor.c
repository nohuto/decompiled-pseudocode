/*
 * XREFs of HalpCmciPollProcessor @ 0x14037CE58
 * Callers:
 *     HalpCmciInitProcessor @ 0x14037CD68 (HalpCmciInitProcessor.c)
 *     HalpCmciDeferredRoutine @ 0x140503740 (HalpCmciDeferredRoutine.c)
 * Callees:
 *     HalpGetMcaPcrContext @ 0x14037CEF4 (HalpGetMcaPcrContext.c)
 *     HalpCmcPollProcessor @ 0x14037CF58 (HalpCmcPollProcessor.c)
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140503AC8 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  char CpuVendor; // di
  __int64 McaPcrContext; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  CpuVendor = HalpGetCpuVendor();
  McaPcrContext = HalpGetMcaPcrContext(a1);
  LOBYTE(v4) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v4, a1, McaPcrContext);
  if ( CpuVendor == 1 )
  {
    LOBYTE(v6) = 1;
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource, v6, a1);
  }
  return result;
}
