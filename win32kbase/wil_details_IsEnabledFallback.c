/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C00DC9A0
 * Callers:
 *     Feature_439792958__private_IsEnabledFallback @ 0x1C00DC888 (Feature_439792958__private_IsEnabledFallback.c)
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback @ 0x1C00DC8DC (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C00DC930 (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 *     Feature_ClipboardCredentialMonitor__private_IsEnabledFallback @ 0x1C00DCA6C (Feature_ClipboardCredentialMonitor__private_IsEnabledFallback.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback @ 0x1C00DCCE8 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback.c)
 *     Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback @ 0x1C00DCD3C (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback @ 0x1C00DD6B4 (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback.c)
 *     Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledFallback @ 0x1C00DDE34 (Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledFallback.c)
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback @ 0x1C00DDE88 (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback.c)
 *     Feature_UpdateDelayEventThresholds__private_IsEnabledFallback @ 0x1C00DDEDC (Feature_UpdateDelayEventThresholds__private_IsEnabledFallback.c)
 *     Feature_KIDV2__private_IsEnabledFallback @ 0x1C00DDF60 (Feature_KIDV2__private_IsEnabledFallback.c)
 *     Feature_1626422585__private_IsEnabledFallback @ 0x1C00DDFB4 (Feature_1626422585__private_IsEnabledFallback.c)
 *     Feature_3058082109__private_IsEnabledFallback @ 0x1C00DE074 (Feature_3058082109__private_IsEnabledFallback.c)
 *     Feature_3160330556__private_IsEnabledFallback @ 0x1C00DE0C8 (Feature_3160330556__private_IsEnabledFallback.c)
 *     Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledFallback @ 0x1C00DE11C (Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledFallback.c)
 *     Feature_1391280440__private_IsEnabledFallback @ 0x1C00DE1D4 (Feature_1391280440__private_IsEnabledFallback.c)
 *     Feature_Servicing_CFONTPrintLeak__private_IsEnabledFallback @ 0x1C00DE7C4 (Feature_Servicing_CFONTPrintLeak__private_IsEnabledFallback.c)
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback @ 0x1C00DF314 (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback.c)
 *     Feature_AbydosInfra__private_IsEnabledFallback @ 0x1C00DFE5C (Feature_AbydosInfra__private_IsEnabledFallback.c)
 *     Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback @ 0x1C00DFEB0 (Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback.c)
 *     Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledFallback @ 0x1C00DFF68 (Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledFallback.c)
 *     Feature_PTPTraceStrInitFix__private_IsEnabledFallback @ 0x1C00E0D70 (Feature_PTPTraceStrInitFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_ListViewScrollingFix__private_IsEnabledFallback @ 0x1C00E1088 (Feature_Servicing_ListViewScrollingFix__private_IsEnabledFallback.c)
 *     Feature_DisableMouseRateLimiting__private_IsEnabledFallback @ 0x1C00E10DC (Feature_DisableMouseRateLimiting__private_IsEnabledFallback.c)
 *     Feature_191799614__private_IsEnabledFallback @ 0x1C00E157C (Feature_191799614__private_IsEnabledFallback.c)
 *     Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledFallback @ 0x1C00E15D0 (Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledFallback.c)
 *     Feature_503751999__private_IsEnabledFallback @ 0x1C00E1624 (Feature_503751999__private_IsEnabledFallback.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C00E16AC (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 *     Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledFallback @ 0x1C00E1700 (Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00DC94C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0155180 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
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
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
