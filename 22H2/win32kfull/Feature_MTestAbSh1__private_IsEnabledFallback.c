/*
 * XREFs of Feature_MTestAbSh1__private_IsEnabledFallback @ 0x1C013A1C0
 * Callers:
 *     Feature_MTestAbSh1__private_IsEnabledDeviceUsage @ 0x1C013A188 (Feature_MTestAbSh1__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01394F4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MTestAbSh1__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_MTestAbSh1__private_descriptor);
}
