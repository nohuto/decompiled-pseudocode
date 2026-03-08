/*
 * XREFs of MonitorEnableDisableAdvancedColor @ 0x1C03BF7E4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001EBC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0171D38 (-IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C03C9658 (-SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorEnableDisableAdvancedColor(struct HDXGMONITOR__ *a1, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(&v6, a1);
    v4 = v6;
    if ( v6 )
    {
      if ( (DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(*(DxgMonitor::MonitorColorState **)(v6 + 224)) || !a2)
        && (!DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(*(DxgMonitor::MonitorColorState **)(v4 + 224)) || a2) )
      {
        v5 = 255;
      }
      else
      {
        v5 = DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(
               *(DxgMonitor::MonitorColorState **)(v4 + 224),
               a2 != 0);
      }
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v4 )
    {
      ExReleaseResourceLite((PERESOURCE)(v4 + 24));
      KeLeaveCriticalRegion();
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
