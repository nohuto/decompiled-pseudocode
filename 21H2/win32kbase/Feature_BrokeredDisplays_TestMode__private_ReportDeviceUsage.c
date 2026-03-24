/*
 * XREFs of Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage @ 0x1C00C7054
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00A4CA8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00C6F6C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114164 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_BrokeredDisplays_TestMode__private_featureState;
  if ( (Feature_BrokeredDisplays_TestMode__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_BrokeredDisplays_TestMode__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_BrokeredDisplays_TestMode__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_BrokeredDisplays_TestMode__private_descriptor);
  }
}
