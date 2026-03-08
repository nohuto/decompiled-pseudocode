/*
 * XREFs of Feature_AtomicCheckFailure__private_ReportDeviceUsage @ 0x1C012D370
 * Callers:
 *     InitModuleAllocations @ 0x1C00F4050 (InitModuleAllocations.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012CB40 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C012CDB8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_AtomicCheckFailure__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_AtomicCheckFailure__private_featureState;
  if ( (Feature_AtomicCheckFailure__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_AtomicCheckFailure__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_AtomicCheckFailure__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_AtomicCheckFailure__private_descriptor);
  }
}
