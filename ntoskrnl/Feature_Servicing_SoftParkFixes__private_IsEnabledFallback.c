/*
 * XREFs of Feature_Servicing_SoftParkFixes__private_IsEnabledFallback @ 0x14040AEE8
 * Callers:
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity @ 0x14040AE78 (Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage @ 0x14040AEB0 (Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting @ 0x14040AF40 (Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_SoftParkFixes__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_SoftParkFixes__private_descriptor);
}
