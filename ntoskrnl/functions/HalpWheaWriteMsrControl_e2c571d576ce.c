__int64 __fastcall HalpWheaWriteMsrControl(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v6 = (unsigned int)(16 * a2 - 1073733632);
  else
    v6 = (unsigned int)(4 * a2 + 1024);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))HalpWheaWriteMsr)(a1, v6, a3);
}
