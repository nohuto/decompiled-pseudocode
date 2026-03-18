/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C
 * Callers:
 *     CmpRecordRegistryLockRelease @ 0x1402ACA10 (CmpRecordRegistryLockRelease.c)
 *     CmpRecordRegistryLockAcquire @ 0x1402ACA70 (CmpRecordRegistryLockAcquire.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     PopCheckForIdleness @ 0x1402D66F0 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x140368F70 (PopResetIdleTime.c)
 *     PopHandleSystemIdleReset @ 0x140368FC4 (PopHandleSystemIdleReset.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1403CF1BC (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403DCA14 (PpmHeteroInitializeHgsSupport.c)
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
 *     KiCollectTriageDumpDataBlocks @ 0x140567630 (KiCollectTriageDumpDataBlocks.c)
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x140569768 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405697EC (KiLogUserCetSetContextIpValidationFailure.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     PopExecuteSystemIdleAction @ 0x140752DA8 (PopExecuteSystemIdleAction.c)
 *     PopSystemIdleWorker @ 0x140752F30 (PopSystemIdleWorker.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407F2028 (PopProcessSessionDisplayStateChange.c)
 *     PopMonitorInvocation @ 0x1407F2930 (PopMonitorInvocation.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1408080F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopQueryRemainingSystemIdleTime @ 0x14080A360 (PopQueryRemainingSystemIdleTime.c)
 *     PopInitSIdle @ 0x140819CB8 (PopInitSIdle.c)
 *     PopUpdateSystemIdleContext @ 0x140819D40 (PopUpdateSystemIdleContext.c)
 *     PoClearTransitionMarker @ 0x1408285B0 (PoClearTransitionMarker.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x140858820 (PopDirectedDripsQueryEnabledMitigations.c)
 *     KeInitializeVelocity @ 0x1408618D8 (KeInitializeVelocity.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140995B08 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140998B6C (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopPolicySystemIdle @ 0x14099D040 (PopPolicySystemIdle.c)
 *     MiInitializeCfg @ 0x140B08F6C (MiInitializeCfg.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     KiInitializeVelocity @ 0x140B29BDC (KiInitializeVelocity.c)
 *     PopPowerButtonSuppressionInit @ 0x140B310D4 (PopPowerButtonSuppressionInit.c)
 *     BgpBcInitializeCriticalMode @ 0x140B55C50 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402ACAD0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]

  a7 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a6 != 0 ? 2 : 6,
                                                                                                     v9,
                                                                                                     1u);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v10) = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v10, 1LL);
    }
  }
  return result;
}
