/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00D0048
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00169E4 (DrvBuildDevmodeList.c)
 *     wil_details_IsEnabledFallback @ 0x1C00D009C (wil_details_IsEnabledFallback.c)
 *     Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage @ 0x1C00D20DC (Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage.c)
 *     Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage @ 0x1C00D2AC8 (Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00D2B2C (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_CursorDeadzoneJump__private_ReportDeviceUsage @ 0x1C00D46B4 (Feature_CursorDeadzoneJump__private_ReportDeviceUsage.c)
 *     Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage @ 0x1C00D5650 (Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage.c)
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
