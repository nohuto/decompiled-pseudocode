/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0028AF8 (DrvBuildDevmodeList.c)
 *     wil_details_IsEnabledFallback @ 0x1C00DC9A0 (wil_details_IsEnabledFallback.c)
 *     Feature_EnumDisplayMonitors_UseSharedLock__private_ReportDeviceUsage @ 0x1C00DCAA4 (Feature_EnumDisplayMonitors_UseSharedLock__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage @ 0x1C00DCB08 (Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage @ 0x1C00DCB6C (Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedMsgFilter__private_ReportDeviceUsage @ 0x1C00DCBD0 (Feature_UseSharedMsgFilter__private_ReportDeviceUsage.c)
 *     Feature_UserCritOpt__private_ReportDeviceUsage @ 0x1C00DCC34 (Feature_UserCritOpt__private_ReportDeviceUsage.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1C00DD738 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage @ 0x1C00DE33C (Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage.c)
 *     Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage @ 0x1C00DE8D8 (Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00DE93C (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     Feature_PenTapped_ReportUsage @ 0x1C00DF604 (Feature_PenTapped_ReportUsage.c)
 *     Feature_CursorDeadzoneJump__private_ReportDeviceUsage @ 0x1C00DFECC (Feature_CursorDeadzoneJump__private_ReportDeviceUsage.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00E01B0 (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1194 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_MouseInputVirtualization__private_ReportDeviceUsage @ 0x1C00E11F8 (Feature_MouseInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PTPInputVirtualization__private_ReportDeviceUsage @ 0x1C00E125C (Feature_PTPInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PenInputVirtualization__private_ReportDeviceUsage @ 0x1C00E12C0 (Feature_PenInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_TouchInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1324 (Feature_TouchInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage @ 0x1C00E1388 (Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00C7224 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned __int64 a2,
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
