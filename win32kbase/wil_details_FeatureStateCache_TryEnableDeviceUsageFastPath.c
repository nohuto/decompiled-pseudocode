/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00DC94C
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0028AF8 (DrvBuildDevmodeList.c)
 *     wil_details_IsEnabledFallback @ 0x1C00DC9A0 (wil_details_IsEnabledFallback.c)
 *     Feature_EnumDisplayMonitors_UseSharedLock__private_ReportDeviceUsage @ 0x1C00DCAA4 (Feature_EnumDisplayMonitors_UseSharedLock__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage @ 0x1C00DCB08 (Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage @ 0x1C00DCB6C (Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedMsgFilter__private_ReportDeviceUsage @ 0x1C00DCBD0 (Feature_UseSharedMsgFilter__private_ReportDeviceUsage.c)
 *     Feature_UserCritOpt__private_ReportDeviceUsage @ 0x1C00DCC34 (Feature_UserCritOpt__private_ReportDeviceUsage.c)
 *     Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage @ 0x1C00DE33C (Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage.c)
 *     Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage @ 0x1C00DE8D8 (Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00DE93C (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     Feature_CursorDeadzoneJump__private_ReportDeviceUsage @ 0x1C00DFECC (Feature_CursorDeadzoneJump__private_ReportDeviceUsage.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00E01B0 (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1194 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_MouseInputVirtualization__private_ReportDeviceUsage @ 0x1C00E11F8 (Feature_MouseInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PTPInputVirtualization__private_ReportDeviceUsage @ 0x1C00E125C (Feature_PTPInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PenInputVirtualization__private_ReportDeviceUsage @ 0x1C00E12C0 (Feature_PenInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_TouchInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1324 (Feature_TouchInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage @ 0x1C00E1388 (Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage.c)
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
      v6 = _InterlockedCompareExchange(v3, v5 | v6, v6);
    }
    while ( v7 != v6 );
  }
}
