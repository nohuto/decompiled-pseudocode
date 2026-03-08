/*
 * XREFs of Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040A518
 * Callers:
 *     PpmPerfSnapUtility @ 0x140235210 (PpmPerfSnapUtility.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x14038E12C (PpmHeteroIsMultiClassParkingEnabled.c)
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_MultiCoreClasses__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_MultiCoreClasses__private_featureState;
  if ( (Feature_MultiCoreClasses__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_MultiCoreClasses__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MultiCoreClasses__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_MultiCoreClasses__private_descriptor);
  }
}
