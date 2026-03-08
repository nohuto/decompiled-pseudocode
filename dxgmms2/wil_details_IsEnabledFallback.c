/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C001A424
 * Callers:
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback @ 0x1C0019B7C (Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback.c)
 *     Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledFallback @ 0x1C0019BD0 (Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledFallback.c)
 *     Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledFallback @ 0x1C0019C24 (Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledFallback.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledFallback @ 0x1C001A5F4 (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0019FFC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C001A174 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C001A274 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
