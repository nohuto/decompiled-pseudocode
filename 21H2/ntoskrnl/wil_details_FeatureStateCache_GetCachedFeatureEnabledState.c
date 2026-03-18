/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403DF3B0
 * Callers:
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled @ 0x140416F1C (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled.c)
 *     Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled @ 0x140416F84 (Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled.c)
 *     Feature_Servicing_Cc_InsufVA__private_IsEnabled @ 0x1404170F8 (Feature_Servicing_Cc_InsufVA__private_IsEnabled.c)
 *     Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_IsEnabled @ 0x14041718C (Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_IsEnabled.c)
 *     Feature_Servicing_FSRTLQueryOpen__private_IsEnabled @ 0x140417574 (Feature_Servicing_FSRTLQueryOpen__private_IsEnabled.c)
 *     Feature_Servicing_CopyFileImprovement__private_IsEnabled @ 0x140417818 (Feature_Servicing_CopyFileImprovement__private_IsEnabled.c)
 *     Feature_Servicing_FsctlProcessMitigation__private_IsEnabled @ 0x140417880 (Feature_Servicing_FsctlProcessMitigation__private_IsEnabled.c)
 *     Feature_2506530111__private_IsEnabled @ 0x140417C90 (Feature_2506530111__private_IsEnabled.c)
 *     Feature_2404731194__private_IsEnabled @ 0x1404190B0 (Feature_2404731194__private_IsEnabled.c)
 *     Feature_Servicing_PofxPepReadyActivityCount__private_IsEnabled @ 0x140419CD4 (Feature_Servicing_PofxPepReadyActivityCount__private_IsEnabled.c)
 *     Feature_1729178936__private_IsEnabled @ 0x14041A0D4 (Feature_1729178936__private_IsEnabled.c)
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled @ 0x14041A808 (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled.c)
 *     Feature_3907421502__private_IsEnabled @ 0x14041AC58 (Feature_3907421502__private_IsEnabled.c)
 *     Feature_1831408952__private_IsEnabled @ 0x14041ACC0 (Feature_1831408952__private_IsEnabled.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabled @ 0x14041AD40 (Feature_Servicing_Opnum_Filter__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140502D50 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140502C58 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
