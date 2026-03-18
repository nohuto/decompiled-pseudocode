/*
 * XREFs of Feature_RapidHpdDeferRecalc__private_ReportDeviceUsage @ 0x1C00263C0
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C001A770 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ??0RAPID_HPD_MANAGER@@QEAA@XZ @ 0x1C001FFC0 (--0RAPID_HPD_MANAGER@@QEAA@XZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00245B0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024828 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_RapidHpdDeferRecalc__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_RapidHpdDeferRecalc__private_featureState;
  if ( (Feature_RapidHpdDeferRecalc__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_RapidHpdDeferRecalc__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_RapidHpdDeferRecalc__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_RapidHpdDeferRecalc__private_descriptor);
  }
}
