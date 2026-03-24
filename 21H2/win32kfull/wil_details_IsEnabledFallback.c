/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C01667C0
 * Callers:
 *     Feature_3645952312__private_IsEnabledFallback @ 0x1C01664CC (Feature_3645952312__private_IsEnabledFallback.c)
 *     Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback @ 0x1C01688CC (Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback.c)
 *     Feature_ReadClipboardEvent__private_IsEnabledFallback @ 0x1C016965C (Feature_ReadClipboardEvent__private_IsEnabledFallback.c)
 *     Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledFallback @ 0x1C0169A68 (Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledFallback.c)
 *     Feature_1508323640__private_IsEnabledFallback @ 0x1C016A164 (Feature_1508323640__private_IsEnabledFallback.c)
 *     Feature_2596596024__private_IsEnabledFallback @ 0x1C016A5F0 (Feature_2596596024__private_IsEnabledFallback.c)
 *     Feature_1989462328__private_IsEnabledFallback @ 0x1C016AE18 (Feature_1989462328__private_IsEnabledFallback.c)
 *     Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledFallback @ 0x1C016AE6C (Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledFallback.c)
 *     Feature_2249667896__private_IsEnabledFallback @ 0x1C016B234 (Feature_2249667896__private_IsEnabledFallback.c)
 *     Feature_895686970__private_IsEnabledFallback @ 0x1C016B288 (Feature_895686970__private_IsEnabledFallback.c)
 *     Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback @ 0x1C016B8E4 (Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback.c)
 *     Feature_2593139002__private_IsEnabledFallback @ 0x1C016BD8C (Feature_2593139002__private_IsEnabledFallback.c)
 *     Feature_2356201784__private_IsEnabledFallback @ 0x1C016D944 (Feature_2356201784__private_IsEnabledFallback.c)
 *     Feature_2932140344__private_IsEnabledFallback @ 0x1C016D998 (Feature_2932140344__private_IsEnabledFallback.c)
 *     Feature_4184807738__private_IsEnabledFallback @ 0x1C016DC60 (Feature_4184807738__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00D37A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C01664E8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C01665E8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2, volatile signed __int32 **a3)
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
    if ( (unsigned int)(a2 - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
