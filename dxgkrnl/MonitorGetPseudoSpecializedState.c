/*
 * XREFs of MonitorGetPseudoSpecializedState @ 0x1C01D5398
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1C01D5430 (-GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z.c)
 */

__int64 __fastcall MonitorGetPseudoSpecializedState(__int64 a1, bool *a2, bool *a3, bool *a4)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v10, a1);
    v7 = v10;
    if ( v10 )
    {
      DxgMonitor::MonitorUsageState::GetPseudoSpecializedState(
        *(DxgMonitor::MonitorUsageState **)(v10 + 240),
        a2,
        a3,
        a4);
      v8 = 0;
    }
    else
    {
      v8 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v7 )
    {
      ExReleaseResourceLite((PERESOURCE)(v7 + 24));
      KeLeaveCriticalRegion();
    }
    return v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
