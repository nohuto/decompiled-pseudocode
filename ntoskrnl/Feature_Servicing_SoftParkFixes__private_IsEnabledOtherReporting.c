/*
 * XREFs of Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting @ 0x14040AF40
 * Callers:
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting @ 0x14040AF98 (Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledFallback @ 0x14040AEE8 (Feature_Servicing_SoftParkFixes__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting(int a1)
{
  char v1; // bl

  v1 = Feature_Servicing_SoftParkFixes__private_featureState;
  if ( (Feature_Servicing_SoftParkFixes__private_featureState & 2) == 0 )
    return Feature_Servicing_SoftParkFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SoftParkFixes__private_featureState,
             a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_SoftParkFixes__private_descriptor,
    (unsigned int)Feature_Servicing_SoftParkFixes__private_featureState,
    a1,
    1LL);
  return v1 & 1;
}
