/*
 * XREFs of Feature_809279800__private_IsEnabledFallback @ 0x1C0026D60
 * Callers:
 *     Feature_809279800__private_IsEnabledDeviceUsage @ 0x1C0026D28 (Feature_809279800__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00249D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_809279800__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_809279800__private_descriptor);
}
