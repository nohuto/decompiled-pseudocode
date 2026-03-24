/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C00C6FC0
 * Callers:
 *     Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback @ 0x1C00C6E50 (Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback.c)
 *     Feature_2216483128__private_IsEnabledFallback @ 0x1C00C9858 (Feature_2216483128__private_IsEnabledFallback.c)
 *     Feature_2249667896__private_IsEnabledFallback @ 0x1C00C98AC (Feature_2249667896__private_IsEnabledFallback.c)
 *     Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback @ 0x1C00CB6C0 (Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback.c)
 *     Feature_3138188600__private_IsEnabledFallback @ 0x1C00CE68C (Feature_3138188600__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C00C6E6C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00C6F6C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114164 (wil_details_FeatureReporting_ReportUsageToService.c)
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
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
