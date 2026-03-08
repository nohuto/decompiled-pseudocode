/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140409AE0
 * Callers:
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledFallback @ 0x140409A64 (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x140409C9C (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
 *     Feature_Servicing_IommuRTEFault__private_IsEnabledFallback @ 0x140409D40 (Feature_Servicing_IommuRTEFault__private_IsEnabledFallback.c)
 *     Feature_CcImprovementsForReFS__private_IsEnabledFallback @ 0x140409E30 (Feature_CcImprovementsForReFS__private_IsEnabledFallback.c)
 *     Feature_Servicing_Cc_InsufVA__private_IsEnabledFallback @ 0x140409E84 (Feature_Servicing_Cc_InsufVA__private_IsEnabledFallback.c)
 *     Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledFallback @ 0x140409F04 (Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledFallback.c)
 *     Feature_LivedumpProcessFiltering__private_IsEnabledFallback @ 0x140409F58 (Feature_LivedumpProcessFiltering__private_IsEnabledFallback.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040A0C8 (Feature_FsctlProcessMitigation__private_IsEnabledFallback.c)
 *     Feature_REFSDV__private_IsEnabledFallback @ 0x14040A11C (Feature_REFSDV__private_IsEnabledFallback.c)
 *     Feature_Servicing_CopyEABufferHandling__private_IsEnabledFallback @ 0x14040A1A8 (Feature_Servicing_CopyEABufferHandling__private_IsEnabledFallback.c)
 *     Feature_2723316028__private_IsEnabledFallback @ 0x14040A228 (Feature_2723316028__private_IsEnabledFallback.c)
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback @ 0x14040A298 (Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback.c)
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x14040A2F0 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
 *     Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledFallback @ 0x14040A580 (Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledFallback.c)
 *     Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledFallback @ 0x14040AC90 (Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledFallback.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledFallback @ 0x14040AEE8 (Feature_Servicing_SoftParkFixes__private_IsEnabledFallback.c)
 *     Feature_2203404602__private_IsEnabledFallback @ 0x14040B4B0 (Feature_2203404602__private_IsEnabledFallback.c)
 *     Feature_Servicing_b9g4B8t7__private_IsEnabledFallback @ 0x14040B504 (Feature_Servicing_b9g4B8t7__private_IsEnabledFallback.c)
 *     Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback @ 0x14040B984 (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback @ 0x14040BAA8 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback.c)
 *     Feature_1875039550__private_IsEnabledFallback @ 0x14040BBEC (Feature_1875039550__private_IsEnabledFallback.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x14040C7D4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledFallback @ 0x14040C8F4 (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledFallback.c)
 *     Feature_WatsonFix32512504__private_IsEnabledFallback @ 0x14040CBB0 (Feature_WatsonFix32512504__private_IsEnabledFallback.c)
 *     Feature_3974530366__private_IsEnabledFallback @ 0x14040D3F8 (Feature_3974530366__private_IsEnabledFallback.c)
 *     Feature_1697191224__private_IsEnabledFallback @ 0x14040D4C0 (Feature_1697191224__private_IsEnabledFallback.c)
 *     Feature_FastResource2__private_IsEnabledFallback @ 0x14040D514 (Feature_FastResource2__private_IsEnabledFallback.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x1404117F0 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
 *     Feature_Mercury_App_Backup_V2__private_IsEnabledFallback @ 0x140411848 (Feature_Mercury_App_Backup_V2__private_IsEnabledFallback.c)
 *     Feature_2516935995__private_IsEnabledFallback @ 0x14041189C (Feature_2516935995__private_IsEnabledFallback.c)
 *     Feature_3391791421__private_IsEnabledFallback @ 0x1404118F4 (Feature_3391791421__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1404FBF0C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2, _QWORD *a3)
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
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, a3);
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
