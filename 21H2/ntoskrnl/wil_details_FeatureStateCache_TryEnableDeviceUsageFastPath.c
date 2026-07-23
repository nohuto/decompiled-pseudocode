/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F1CA0
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
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v6 | v5, v6);
    }
    while ( v7 != v6 );
  }
}
