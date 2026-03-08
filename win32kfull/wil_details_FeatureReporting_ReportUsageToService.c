/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C012CB40
 * Callers:
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010AD6C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 *     Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage @ 0x1C012D160 (Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage.c)
 *     Feature_AtomicCheckFailure__private_ReportDeviceUsage @ 0x1C012D370 (Feature_AtomicCheckFailure__private_ReportDeviceUsage.c)
 *     Feature_DeliverDespiteMessageFilter__private_ReportDeviceUsage @ 0x1C012D614 (Feature_DeliverDespiteMessageFilter__private_ReportDeviceUsage.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C012E1C8 (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C012E22C (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 *     Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage @ 0x1C012E440 (Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage.c)
 *     Feature_ReadClipboardEvent__private_ReportDeviceUsage @ 0x1C012E950 (Feature_ReadClipboardEvent__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage @ 0x1C012E9B4 (Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage @ 0x1C012EA18 (Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedNtUserMessageCall__private_ReportDeviceUsage @ 0x1C012EA7C (Feature_UseSharedNtUserMessageCall__private_ReportDeviceUsage.c)
 *     Feature_UserCritOpt__private_ReportDeviceUsage @ 0x1C012EAE0 (Feature_UserCritOpt__private_ReportDeviceUsage.c)
 *     Feature_BoostOnDragSize__private_ReportDeviceUsage @ 0x1C012EB98 (Feature_BoostOnDragSize__private_ReportDeviceUsage.c)
 *     Feature_Emrbspi__private_ReportDeviceUsage @ 0x1C012F2D4 (Feature_Emrbspi__private_ReportDeviceUsage.c)
 *     Feature_Erpsrbspi__private_ReportDeviceUsage @ 0x1C012F338 (Feature_Erpsrbspi__private_ReportDeviceUsage.c)
 *     Feature_InkProcessor__private_ReportDeviceUsage @ 0x1C012F574 (Feature_InkProcessor__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C012CBC8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C012CFFC (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2 & 1;
  v5 = wil_details_MapReportingKind((unsigned int)a3, a2 & 1, a3, a2);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     v6,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v8 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4, &v9, 0LL, v8, 1LL);
    }
  }
  return result;
}
