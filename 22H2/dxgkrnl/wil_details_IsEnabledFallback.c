/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C00259F4
 * Callers:
 *     Feature_309893433__private_IsEnabledFallback @ 0x1C00259D8 (Feature_309893433__private_IsEnabledFallback.c)
 *     Feature_1679598905__private_IsEnabledFallback @ 0x1C0026194 (Feature_1679598905__private_IsEnabledFallback.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledFallback @ 0x1C00261E8 (Feature_WSL_Device_GPU__private_IsEnabledFallback.c)
 *     Feature_1279041848__private_IsEnabledFallback @ 0x1C0026724 (Feature_1279041848__private_IsEnabledFallback.c)
 *     Feature_2505606457__private_IsEnabledFallback @ 0x1C0026778 (Feature_2505606457__private_IsEnabledFallback.c)
 *     Feature_611095865__private_IsEnabledFallback @ 0x1C00267CC (Feature_611095865__private_IsEnabledFallback.c)
 *     Feature_3088355641__private_IsEnabledFallback @ 0x1C0027C3C (Feature_3088355641__private_IsEnabledFallback.c)
 *     Feature_1259646266__private_IsEnabledFallback @ 0x1C0027E14 (Feature_1259646266__private_IsEnabledFallback.c)
 *     Feature_2952048952__private_IsEnabledFallback @ 0x1C0027E90 (Feature_2952048952__private_IsEnabledFallback.c)
 *     Feature_380934456__private_IsEnabledFallback @ 0x1C002836C (Feature_380934456__private_IsEnabledFallback.c)
 *     Feature_MonitorIoctlTesting__private_IsEnabledFallback @ 0x1C0028A38 (Feature_MonitorIoctlTesting__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F04 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0025074 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0025174 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
