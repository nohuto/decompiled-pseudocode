/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x140252780
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x1403F1434 (wil_details_IsEnabledFallback.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x1403F1B68 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_DisableLowQosTimerResolution__private_ReportDeviceUsage @ 0x1403F1BD0 (Feature_DisableLowQosTimerResolution__private_ReportDeviceUsage.c)
 *     Feature_ReduceTimerWakes__private_ReportDeviceUsage @ 0x1403F1C38 (Feature_ReduceTimerWakes__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x1403F1CA0 (Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistAllowRealTime__private_ReportDeviceUsage @ 0x1403F1D08 (Feature_SchedulerAssistAllowRealTime__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistEnableBAM__private_ReportDeviceUsage @ 0x1403F1D70 (Feature_SchedulerAssistEnableBAM__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistForegroundBoostBias__private_ReportDeviceUsage @ 0x1403F1DD8 (Feature_SchedulerAssistForegroundBoostBias__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistHRTimer__private_ReportDeviceUsage @ 0x1403F1E40 (Feature_SchedulerAssistHRTimer__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistLongSpinWait__private_ReportDeviceUsage @ 0x1403F1EA8 (Feature_SchedulerAssistLongSpinWait__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistPreemptionPriorityKick__private_ReportDeviceUsage @ 0x1403F1F10 (Feature_SchedulerAssistPreemptionPriorityKick__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistReflectPriority__private_ReportDeviceUsage @ 0x1403F1F78 (Feature_SchedulerAssistReflectPriority__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistSystemIrql__private_ReportDeviceUsage @ 0x1403F1FE0 (Feature_SchedulerAssistSystemIrql__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistThreadFlag__private_ReportDeviceUsage @ 0x1403F2048 (Feature_SchedulerAssistThreadFlag__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x1403F20B0 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x1403F2118 (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage @ 0x1403F2198 (Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage.c)
 *     Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage @ 0x1403F746C (Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage.c)
 *     Feature_PdttSupport__private_ReportDeviceUsage @ 0x1403F757C (Feature_PdttSupport__private_ReportDeviceUsage.c)
 *     Feature_DirectedFx__private_ReportDeviceUsage @ 0x1403F781C (Feature_DirectedFx__private_ReportDeviceUsage.c)
 *     Feature_PowerButtonBugcheck__private_ReportDeviceUsage @ 0x1403F7B7C (Feature_PowerButtonBugcheck__private_ReportDeviceUsage.c)
 *     Feature_WCOSDeveloperMode__private_ReportDeviceUsage @ 0x1403F80D0 (Feature_WCOSDeveloperMode__private_ReportDeviceUsage.c)
 *     Feature_WldpDeveloperMode__private_ReportDeviceUsage @ 0x1403F8138 (Feature_WldpDeveloperMode__private_ReportDeviceUsage.c)
 *     Feature_PPLEnforcement__private_ReportDeviceUsage @ 0x1403F81F4 (Feature_PPLEnforcement__private_ReportDeviceUsage.c)
 *     Feature_RelaxTcbForUWP__private_ReportDeviceUsage @ 0x1403F825C (Feature_RelaxTcbForUWP__private_ReportDeviceUsage.c)
 *     Feature_SModeAdminless__private_ReportDeviceUsage @ 0x1403F8598 (Feature_SModeAdminless__private_ReportDeviceUsage.c)
 *     Feature_LogErrorRecords__private_ReportDeviceUsage @ 0x1403F8BF8 (Feature_LogErrorRecords__private_ReportDeviceUsage.c)
 *     sub_1403F8CD4 @ 0x1403F8CD4 (sub_1403F8CD4.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402528AC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v6 = a2 & 1;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v7 = 4 * (unsigned int)!(a2 & 1);
        goto LABEL_17;
      case 2:
        v7 = 4 * (unsigned int)!(a2 & 1) + 1;
        goto LABEL_17;
      case 3:
        v7 = 4 * (unsigned int)!(a2 & 1) + 2;
        goto LABEL_17;
      case 4:
        v7 = 4 * (unsigned int)!(a2 & 1) + 3;
        goto LABEL_17;
      case 5:
        v7 = 2 * (unsigned int)!(a2 & 1) + 8;
        goto LABEL_17;
      case 6:
        v7 = 2 * (unsigned int)!(a2 & 1) + 9;
        goto LABEL_17;
    }
    if ( (unsigned __int8)(a3 - 100) <= 0x31u )
    {
      v7 = (unsigned __int8)(a3 - 100) + (v6 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v7 = 255LL;
LABEL_17:
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v7);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v6, &v9, 0LL, 0, a4);
  }
  return result;
}
