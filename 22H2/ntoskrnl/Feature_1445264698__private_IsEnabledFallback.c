/*
 * XREFs of Feature_1445264698__private_IsEnabledFallback @ 0x1403F8A5C
 * Callers:
 *     Feature_1445264698__private_IsEnabledDeviceUsage @ 0x1403F8A24 (Feature_1445264698__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F1434 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1445264698__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_1445264698__private_descriptor);
}
