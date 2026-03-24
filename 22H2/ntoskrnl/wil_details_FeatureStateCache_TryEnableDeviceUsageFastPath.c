/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F13E0
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
