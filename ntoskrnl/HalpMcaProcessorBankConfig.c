/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x14037D0B4
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140A87E04 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x140503F88 (HalpMcaProcessorBankConfigAmd.c)
 */

__int64 __fastcall HalpMcaProcessorBankConfig(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = HalpGetCpuVendor();
  if ( (_BYTE)result == 1 )
  {
    if ( HalpMcaScalableRasSupported )
      return HalpMcaProcessorBankConfigAmd(a1, a2);
  }
  return result;
}
