/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x140285D90
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x1403F1CF4 (wil_details_IsEnabledFallback.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x1403F2444 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_DisableLowQosTimerResolution__private_ReportDeviceUsage @ 0x1403F24AC (Feature_DisableLowQosTimerResolution__private_ReportDeviceUsage.c)
 *     Feature_ReduceTimerWakes__private_ReportDeviceUsage @ 0x1403F2514 (Feature_ReduceTimerWakes__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x1403F257C (Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistAllowRealTime__private_ReportDeviceUsage @ 0x1403F25E4 (Feature_SchedulerAssistAllowRealTime__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistEnableBAM__private_ReportDeviceUsage @ 0x1403F264C (Feature_SchedulerAssistEnableBAM__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistForegroundBoostBias__private_ReportDeviceUsage @ 0x1403F26B4 (Feature_SchedulerAssistForegroundBoostBias__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistHRTimer__private_ReportDeviceUsage @ 0x1403F271C (Feature_SchedulerAssistHRTimer__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistLongSpinWait__private_ReportDeviceUsage @ 0x1403F2784 (Feature_SchedulerAssistLongSpinWait__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistPreemptionPriorityKick__private_ReportDeviceUsage @ 0x1403F27EC (Feature_SchedulerAssistPreemptionPriorityKick__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistReflectPriority__private_ReportDeviceUsage @ 0x1403F2854 (Feature_SchedulerAssistReflectPriority__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistSystemIrql__private_ReportDeviceUsage @ 0x1403F28BC (Feature_SchedulerAssistSystemIrql__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistThreadFlag__private_ReportDeviceUsage @ 0x1403F2924 (Feature_SchedulerAssistThreadFlag__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x1403F298C (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x1403F29F4 (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage @ 0x1403F2A74 (Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage.c)
 *     Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage @ 0x1403F7DEC (Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage.c)
 *     Feature_PdttSupport__private_ReportDeviceUsage @ 0x1403F7EA8 (Feature_PdttSupport__private_ReportDeviceUsage.c)
 *     Feature_DirectedFx__private_ReportDeviceUsage @ 0x1403F8148 (Feature_DirectedFx__private_ReportDeviceUsage.c)
 *     Feature_PowerButtonBugcheck__private_ReportDeviceUsage @ 0x1403F84A8 (Feature_PowerButtonBugcheck__private_ReportDeviceUsage.c)
 *     Feature_WCOSDeveloperMode__private_ReportDeviceUsage @ 0x1403F8A80 (Feature_WCOSDeveloperMode__private_ReportDeviceUsage.c)
 *     Feature_WldpDeveloperMode__private_ReportDeviceUsage @ 0x1403F8AE8 (Feature_WldpDeveloperMode__private_ReportDeviceUsage.c)
 *     Feature_PPLEnforcement__private_ReportDeviceUsage @ 0x1403F8BA4 (Feature_PPLEnforcement__private_ReportDeviceUsage.c)
 *     Feature_RelaxTcbForUWP__private_ReportDeviceUsage @ 0x1403F8C0C (Feature_RelaxTcbForUWP__private_ReportDeviceUsage.c)
 *     Feature_SModeAdminless__private_ReportDeviceUsage @ 0x1403F8F48 (Feature_SModeAdminless__private_ReportDeviceUsage.c)
 *     Feature_LogErrorRecords__private_ReportDeviceUsage @ 0x1403F974C (Feature_LogErrorRecords__private_ReportDeviceUsage.c)
 *     sub_1403F9834 @ 0x1403F9834 (sub_1403F9834.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140285EBC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
