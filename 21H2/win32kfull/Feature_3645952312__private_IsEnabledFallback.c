/*
 * XREFs of Feature_3645952312__private_IsEnabledFallback @ 0x1C01664CC
 * Callers:
 *     Feature_3645952312__private_IsEnabledDeviceUsage @ 0x1C0166494 (Feature_3645952312__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01667C0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3645952312__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3645952312__private_descriptor);
}
