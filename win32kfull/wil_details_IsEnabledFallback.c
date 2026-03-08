/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C012CF68
 * Callers:
 *     Feature_KIDV2__private_IsEnabledFallback @ 0x1C012C724 (Feature_KIDV2__private_IsEnabledFallback.c)
 *     Feature_ReportShellHotKey__private_IsEnabledFallback @ 0x1C012C778 (Feature_ReportShellHotKey__private_IsEnabledFallback.c)
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback @ 0x1C012C7CC (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback.c)
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback @ 0x1C012D24C (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback.c)
 *     Feature_YieldToHAM__private_IsEnabledFallback @ 0x1C012D40C (Feature_YieldToHAM__private_IsEnabledFallback.c)
 *     Feature_AlwaysWakeTargetThread__private_IsEnabledFallback @ 0x1C012D5F8 (Feature_AlwaysWakeTargetThread__private_IsEnabledFallback.c)
 *     Feature_DropHtTransparentOffThread__private_IsEnabledFallback @ 0x1C012D6B0 (Feature_DropHtTransparentOffThread__private_IsEnabledFallback.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C012D704 (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 *     Feature_MTestAbSh1__private_IsEnabledFallback @ 0x1C012D758 (Feature_MTestAbSh1__private_IsEnabledFallback.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C012D7AC (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 *     Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledFallback @ 0x1C012DC3C (Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledFallback.c)
 *     Feature_AbydosInfra__private_IsEnabledFallback @ 0x1C012E934 (Feature_AbydosInfra__private_IsEnabledFallback.c)
 *     Feature_1200431418__private_IsEnabledFallback @ 0x1C012EB7C (Feature_1200431418__private_IsEnabledFallback.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback @ 0x1C012EC7C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback.c)
 *     Feature_439792958__private_IsEnabledFallback @ 0x1C012EEC8 (Feature_439792958__private_IsEnabledFallback.c)
 *     Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledFallback @ 0x1C012EF78 (Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledFallback.c)
 *     Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledFallback @ 0x1C012EFCC (Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledFallback.c)
 *     Feature_FixExtendedFrameBoundsApi__private_IsEnabledFallback @ 0x1C012F158 (Feature_FixExtendedFrameBoundsApi__private_IsEnabledFallback.c)
 *     Feature_1804411194__private_IsEnabledFallback @ 0x1C012F1C4 (Feature_1804411194__private_IsEnabledFallback.c)
 *     Feature_AnimateWorkAreaChanges__private_IsEnabledFallback @ 0x1C012F2B8 (Feature_AnimateWorkAreaChanges__private_IsEnabledFallback.c)
 *     Feature_3892654395__private_IsEnabledFallback @ 0x1C012F690 (Feature_3892654395__private_IsEnabledFallback.c)
 *     Feature_3160330556__private_IsEnabledFallback @ 0x1C012FB58 (Feature_3160330556__private_IsEnabledFallback.c)
 *     Feature_3058082109__private_IsEnabledFallback @ 0x1C012FDF8 (Feature_3058082109__private_IsEnabledFallback.c)
 *     Feature_2203404602__private_IsEnabledFallback @ 0x1C01304A0 (Feature_2203404602__private_IsEnabledFallback.c)
 *     Feature_2942477631__private_IsEnabledFallback @ 0x1C013086C (Feature_2942477631__private_IsEnabledFallback.c)
 *     Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledFallback @ 0x1C01308C0 (Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledFallback.c)
 *     Feature_2721926456__private_IsEnabledFallback @ 0x1C0130914 (Feature_2721926456__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012CB40 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C012CCB8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C012CDB8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
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
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
