/*
 * XREFs of Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x140419C8C
 * Callers:
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage @ 0x140419C54 (Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_Opnum_Filter__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_Opnum_Filter__private_descriptor);
}
