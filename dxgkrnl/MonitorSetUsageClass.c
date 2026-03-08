/*
 * XREFs of MonitorSetUsageClass @ 0x1C03C0B64
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C9774 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F84CC (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C01FB908 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C0201834 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 */

__int64 __fastcall MonitorSetUsageClass(__int64 a1, unsigned int a2, int a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  DXGMONITOR *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  DXGMONITOR *v12; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v13[14]; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+A0h] [rbp-38h]

  if ( a1 )
  {
    v13[0] = &MonitorEventDeferral::`vftable';
    memset(&v13[1], 0, 0x68uLL);
    v14 = 0;
    MONITOR_MGR::AcquireMonitorExclusive(&v12, a1, a2, 1u);
    v9 = v12;
    if ( v12 )
    {
      v13[1] = (*((_QWORD *)v12 + 21) + 8LL) & -(__int64)(*((_QWORD *)v12 + 21) != 0LL);
      if ( *((_DWORD *)v12 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      v11 = *((_QWORD *)v9 + 30);
      if ( a3 != *(_DWORD *)(v11 + 16) || *(_BYTE *)(v11 + 20) )
      {
        *(_DWORD *)(v11 + 16) = a3;
        *(_BYTE *)(v11 + 20) = 0;
        DXGMONITOR::OnUsageUpdated(v9, (struct DxgMonitor::IMonitorDeferredEventSource *)v13, 1);
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v9 + 24));
      KeLeaveCriticalRegion();
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v13, a4);
      v10 = 0;
    }
    else
    {
      v10 = -1073741632;
      WdLogSingleEntry1(2LL, -1073741632LL);
    }
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v13);
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
