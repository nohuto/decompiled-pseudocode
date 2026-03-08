/*
 * XREFs of Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback @ 0x1C0024514
 * Callers:
 *     Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage @ 0x1C00244DC (Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0024F58 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Dxgk64BitOnlyDriver__private_descriptor);
}
