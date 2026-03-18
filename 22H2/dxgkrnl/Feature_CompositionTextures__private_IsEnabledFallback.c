/*
 * XREFs of Feature_CompositionTextures__private_IsEnabledFallback @ 0x1C0027E20
 * Callers:
 *     Feature_CompositionTextures__private_IsEnabledDeviceUsage @ 0x1C0027DE8 (Feature_CompositionTextures__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00249D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CompositionTextures__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_CompositionTextures__private_descriptor);
}
