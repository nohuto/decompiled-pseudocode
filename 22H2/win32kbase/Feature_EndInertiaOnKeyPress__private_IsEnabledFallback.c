/*
 * XREFs of Feature_EndInertiaOnKeyPress__private_IsEnabledFallback @ 0x1C00D5424
 * Callers:
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage @ 0x1C00D53EC (Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00D009C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_EndInertiaOnKeyPress__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_EndInertiaOnKeyPress__private_descriptor);
}
