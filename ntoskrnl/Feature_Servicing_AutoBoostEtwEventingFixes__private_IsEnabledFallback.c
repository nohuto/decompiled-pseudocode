/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x14040C7D4
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity @ 0x14040C764 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsage @ 0x14040C79C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReporting @ 0x14040C7F0 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReporting.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x14040C828 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_AutoBoostEtwEventingFixes__private_descriptor);
}
