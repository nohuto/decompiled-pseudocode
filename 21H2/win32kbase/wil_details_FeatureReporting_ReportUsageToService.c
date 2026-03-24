/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114164
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0016E50 (DrvBuildDevmodeList.c)
 *     wil_details_IsEnabledFallback @ 0x1C00C6FC0 (wil_details_IsEnabledFallback.c)
 *     Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage @ 0x1C00C7054 (Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x1C00CADEC (Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C00CAE50 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00CAEB4 (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_PenTapped_ReportUsage @ 0x1C00CC9D8 (Feature_PenTapped_ReportUsage.c)
 *     Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage @ 0x1C00CD378 (Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00CD3DC (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00CD9D8 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_MouseInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDA3C (Feature_MouseInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PTPInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDAA0 (Feature_PTPInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PenInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDB04 (Feature_PenInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_TouchInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDB68 (Feature_TouchInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_MinQMouseAndMiP__private_ReportDeviceUsage @ 0x1C00CDBCC (Feature_MinQMouseAndMiP__private_ReportDeviceUsage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0114290 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        int a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v3 = a2 & 1;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v5 = 4 * (unsigned int)!(a2 & 1);
        goto LABEL_17;
      case 2:
        v5 = 4 * (unsigned int)!(a2 & 1) + 1;
        goto LABEL_17;
      case 3:
        v5 = 4 * (unsigned int)!(a2 & 1) + 2;
        goto LABEL_17;
      case 4:
        v5 = 4 * (unsigned int)!(a2 & 1) + 3;
        goto LABEL_17;
      case 5:
        v5 = 2 * (unsigned int)!(a2 & 1) + 8;
        goto LABEL_17;
      case 6:
        v5 = 2 * (unsigned int)!(a2 & 1) + 9;
        goto LABEL_17;
    }
    if ( (unsigned __int8)(a3 - 100) <= 0x31u )
    {
      v5 = (unsigned __int8)(a3 - 100) + (v3 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v5 = 255LL;
LABEL_17:
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v3, &v7, 0LL, 0, 1LL);
  }
  return result;
}
