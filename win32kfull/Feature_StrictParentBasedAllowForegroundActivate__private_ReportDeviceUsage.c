/*
 * XREFs of Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage @ 0x1C012E440
 * Callers:
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C003D0C4 (_anonymous_namespace_--CheckAllowForeground.c)
 *     NtUserNotifyProcessCreate @ 0x1C003EDE0 (NtUserNotifyProcessCreate.c)
 *     EditionPushExitingAppForegroundPolicy @ 0x1C003F010 (EditionPushExitingAppForegroundPolicy.c)
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1C003F218 (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 *     _anonymous_namespace_::ApplyForegroundPolicy @ 0x1C003F514 (_anonymous_namespace_--ApplyForegroundPolicy.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012CB40 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C012CDB8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_StrictParentBasedAllowForegroundActivate__private_featureState;
  if ( (Feature_StrictParentBasedAllowForegroundActivate__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_StrictParentBasedAllowForegroundActivate__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_StrictParentBasedAllowForegroundActivate__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_StrictParentBasedAllowForegroundActivate__private_descriptor);
  }
}
