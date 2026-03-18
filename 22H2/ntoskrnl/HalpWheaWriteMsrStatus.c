/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x140380AA8
 * Callers:
 *     HalpMcaClearError @ 0x1405030A0 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1405035C0 (HalpMcaReadError.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x140506148 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaSetProcessorConfig @ 0x140A8B414 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140380C44 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
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
