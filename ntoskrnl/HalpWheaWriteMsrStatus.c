/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x14037D018
 * Callers:
 *     HalpMcaClearError @ 0x140500FC0 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1405014E0 (HalpMcaReadError.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x140504068 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaSetProcessorConfig @ 0x140A87E04 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaWriteMsrStatus(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * a2 - 1073733631);
  else
    v4 = (unsigned int)(4 * a2 + 1025);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaWriteMsr)(a1, v4, 0LL);
}
