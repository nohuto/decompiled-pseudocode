/*
 * XREFs of Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage @ 0x1C0027F60
 * Callers:
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C00E1BD0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F04 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0025174 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_Dwm_Ownership_Leak_Bugchek__private_featureState;
  if ( (Feature_Dwm_Ownership_Leak_Bugchek__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_Dwm_Ownership_Leak_Bugchek__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Dwm_Ownership_Leak_Bugchek__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_Dwm_Ownership_Leak_Bugchek__private_descriptor);
  }
}
