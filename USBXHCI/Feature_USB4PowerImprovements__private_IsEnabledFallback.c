/*
 * XREFs of Feature_USB4PowerImprovements__private_IsEnabledFallback @ 0x1C001F7A4
 * Callers:
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C001F76C (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C001F638 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_USB4PowerImprovements__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_USB4PowerImprovements__private_descriptor);
}
