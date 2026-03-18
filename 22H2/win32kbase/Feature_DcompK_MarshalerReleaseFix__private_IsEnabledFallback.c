/*
 * XREFs of Feature_DcompK_MarshalerReleaseFix__private_IsEnabledFallback @ 0x1C00D6098
 * Callers:
 *     Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage @ 0x1C00D6060 (Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00D009C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DcompK_MarshalerReleaseFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DcompK_MarshalerReleaseFix__private_descriptor);
}
