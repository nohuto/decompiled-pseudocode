/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00C72FC
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00182C0 (DrvBuildDevmodeList.c)
 *     wil_details_IsEnabledFallback @ 0x1C00C7350 (wil_details_IsEnabledFallback.c)
 *     Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage @ 0x1C00C73E4 (Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x1C00CB33C (Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C00CB3A0 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00CB404 (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage @ 0x1C00CD4D8 (Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00CD53C (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDB38 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_MouseInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDB9C (Feature_MouseInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PTPInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDC00 (Feature_PTPInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_PenInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDC64 (Feature_PenInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_TouchInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDCC8 (Feature_TouchInputVirtualization__private_ReportDeviceUsage.c)
 *     Feature_MinQMouseAndMiP__private_ReportDeviceUsage @ 0x1C00CDD2C (Feature_MinQMouseAndMiP__private_ReportDeviceUsage.c)
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
