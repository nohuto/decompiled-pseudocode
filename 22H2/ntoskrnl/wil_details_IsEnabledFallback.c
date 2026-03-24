/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1403F1434
 * Callers:
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback @ 0x1403F0C68 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback.c)
 *     Feature_1148767544__private_IsEnabledFallback @ 0x1403F750C (Feature_1148767544__private_IsEnabledFallback.c)
 *     Feature_3401902395__private_IsEnabledFallback @ 0x1403F7560 (Feature_3401902395__private_IsEnabledFallback.c)
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback @ 0x1403F79D4 (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback @ 0x1403F7A60 (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback.c)
 *     Feature_693672248__private_IsEnabledFallback @ 0x1403F81D8 (Feature_693672248__private_IsEnabledFallback.c)
 *     Feature_3257204026__private_IsEnabledFallback @ 0x1403F8960 (Feature_3257204026__private_IsEnabledFallback.c)
 *     Feature_1445264698__private_IsEnabledFallback @ 0x1403F8A5C (Feature_1445264698__private_IsEnabledFallback.c)
 *     Feature_CompatBuildInVb__private_IsEnabledFallback @ 0x1403F8D74 (Feature_CompatBuildInVb__private_IsEnabledFallback.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x1403F90A8 (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140252780 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F12E0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F13E0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2, 1LL);
    if ( (unsigned int)(a2 - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
