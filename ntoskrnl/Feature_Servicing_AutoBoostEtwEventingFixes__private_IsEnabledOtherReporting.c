/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x14040C828
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x14040C880 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x14040C7D4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting(int a1)
{
  char v1; // bl

  v1 = Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState;
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 2) == 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_AutoBoostEtwEventingFixes__private_descriptor,
    (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
    a1,
    1LL);
  return v1 & 1;
}
