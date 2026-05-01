/*
 * XREFs of Feature_1089830202__private_IsEnabledFallback @ 0x180047628
 * Callers:
 *     Feature_1089830202__private_IsEnabledDeviceUsage @ 0x180047600 (Feature_1089830202__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Feature_1089830202__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2);
}
