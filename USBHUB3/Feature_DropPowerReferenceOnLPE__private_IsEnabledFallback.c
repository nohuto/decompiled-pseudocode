/*
 * XREFs of Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback @ 0x1C000CE3C
 * Callers:
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage @ 0x1C000CE58 (Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C000CD00 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
