/*
 * XREFs of Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledFallback @ 0x1C001E8E4
 * Callers:
 *     Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledDeviceUsage @ 0x1C001E8AC (Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C001DF70 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
