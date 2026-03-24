/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1403F0AB0
 * Callers:
 *     Feature_1781732665__private_IsEnabledFallback @ 0x1403F0940 (Feature_1781732665__private_IsEnabledFallback.c)
 *     Feature_2208782651__private_IsEnabledFallback @ 0x1403F1388 (Feature_2208782651__private_IsEnabledFallback.c)
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback @ 0x1403F1658 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback.c)
 *     Feature_1113055545__private_IsEnabledFallback @ 0x1403F1D08 (Feature_1113055545__private_IsEnabledFallback.c)
 *     Feature_2400407865__private_IsEnabledFallback @ 0x1403F357C (Feature_2400407865__private_IsEnabledFallback.c)
 *     Feature_3401902395__private_IsEnabledFallback @ 0x1403F7E8C (Feature_3401902395__private_IsEnabledFallback.c)
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback @ 0x1403F8300 (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback @ 0x1403F838C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback.c)
 *     Feature_1332687163__private_IsEnabledFallback @ 0x1403F8644 (Feature_1332687163__private_IsEnabledFallback.c)
 *     Feature_693672248__private_IsEnabledFallback @ 0x1403F8B58 (Feature_693672248__private_IsEnabledFallback.c)
 *     Feature_3257204026__private_IsEnabledFallback @ 0x1403F92E0 (Feature_3257204026__private_IsEnabledFallback.c)
 *     Feature_1445264698__private_IsEnabledFallback @ 0x1403F93DC (Feature_1445264698__private_IsEnabledFallback.c)
 *     Feature_CompatBuildInVb__private_IsEnabledFallback @ 0x1403F96F4 (Feature_CompatBuildInVb__private_IsEnabledFallback.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x1403F9A28 (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140252F20 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F095C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F0A5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
