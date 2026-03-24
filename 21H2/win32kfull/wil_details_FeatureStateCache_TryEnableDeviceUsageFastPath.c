/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C01665E8
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x1C01667C0 (wil_details_IsEnabledFallback.c)
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x1C0166D64 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 *     Feature_AtomicCheckFailure__private_ReportDeviceUsage @ 0x1C0166E4C (Feature_AtomicCheckFailure__private_ReportDeviceUsage.c)
 *     Feature_PerProcessSystemDpi__private_ReportDeviceUsage @ 0x1C0166EB0 (Feature_PerProcessSystemDpi__private_ReportDeviceUsage.c)
 *     Feature_DWMTouchTargeting__private_ReportDeviceUsage @ 0x1C01674EC (Feature_DWMTouchTargeting__private_ReportDeviceUsage.c)
 *     Feature_PenTailDockEvents__private_ReportDeviceUsage @ 0x1C01676DC (Feature_PenTailDockEvents__private_ReportDeviceUsage.c)
 *     Feature_DeliverViaSendMessage__private_ReportDeviceUsage @ 0x1C01679CC (Feature_DeliverViaSendMessage__private_ReportDeviceUsage.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C0168698 (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     Feature_BrokeredDisplays_ConsoleSessions__private_ReportDeviceUsage @ 0x1C01691BC (Feature_BrokeredDisplays_ConsoleSessions__private_ReportDeviceUsage.c)
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C0169220 (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 *     Feature_InkProcessor__private_ReportDeviceUsage @ 0x1C0169FF8 (Feature_InkProcessor__private_ReportDeviceUsage.c)
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
