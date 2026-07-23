/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1403F1CF4
 * Callers:
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback @ 0x1403F1528 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback.c)
 *     Feature_3401902395__private_IsEnabledFallback @ 0x1403F7E8C (Feature_3401902395__private_IsEnabledFallback.c)
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback @ 0x1403F8300 (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback @ 0x1403F838C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback.c)
 *     Feature_2482235707__private_IsEnabledFallback @ 0x1403F8674 (Feature_2482235707__private_IsEnabledFallback.c)
 *     Feature_693672248__private_IsEnabledFallback @ 0x1403F8B88 (Feature_693672248__private_IsEnabledFallback.c)
 *     Feature_2546989371__private_IsEnabledFallback @ 0x1403F8FE8 (Feature_2546989371__private_IsEnabledFallback.c)
 *     Feature_1246750008__private_IsEnabledFallback @ 0x1403F9154 (Feature_1246750008__private_IsEnabledFallback.c)
 *     Feature_1815603512__private_IsEnabledFallback @ 0x1403F91A8 (Feature_1815603512__private_IsEnabledFallback.c)
 *     Feature_1694225722__private_IsEnabledFallback @ 0x1403F940C (Feature_1694225722__private_IsEnabledFallback.c)
 *     Feature_3257204026__private_IsEnabledFallback @ 0x1403F9460 (Feature_3257204026__private_IsEnabledFallback.c)
 *     Feature_1445264698__private_IsEnabledFallback @ 0x1403F955C (Feature_1445264698__private_IsEnabledFallback.c)
 *     Feature_1664289083__private_IsEnabledFallback @ 0x1403F9730 (Feature_1664289083__private_IsEnabledFallback.c)
 *     Feature_CompatBuildInVb__private_IsEnabledFallback @ 0x1403F98D4 (Feature_CompatBuildInVb__private_IsEnabledFallback.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x1403F9C08 (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140285D90 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F1BA0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F1CA0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
