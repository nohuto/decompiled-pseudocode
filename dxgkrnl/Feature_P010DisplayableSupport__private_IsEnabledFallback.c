/*
 * XREFs of Feature_P010DisplayableSupport__private_IsEnabledFallback @ 0x1C0026F58
 * Callers:
 *     Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage @ 0x1C0026F20 (Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0024F58 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_P010DisplayableSupport__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_P010DisplayableSupport__private_descriptor);
}
