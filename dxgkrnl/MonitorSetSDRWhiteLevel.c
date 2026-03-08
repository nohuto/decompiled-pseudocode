/*
 * XREFs of MonitorSetSDRWhiteLevel @ 0x1C03C08CC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001EBC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0374 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03C987C (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevel(struct HDXGMONITOR__ *a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  DxgMonitor::MonitorColorState *v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  MONITOR_MGR::AcquireMonitorExclusive(&v8, a1);
  v4 = v8;
  if ( v8 )
  {
    if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v8 + 224)) )
    {
      v7 = DxgMonitor::MonitorColorState::SetSDRWhiteLevel(v6, a2);
      v5 = v7;
      if ( v7 >= 0 )
      {
        LODWORD(v5) = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v5 = -1073741637LL;
    }
  }
  else
  {
    v5 = -1073741275LL;
  }
  WdLogSingleEntry1(2LL, v5);
LABEL_10:
  if ( v4 )
  {
    ExReleaseResourceLite((PERESOURCE)(v4 + 24));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v5;
}
