/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03BEF88
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C03BFEEC (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F84CC (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C01FB908 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C01FC7C4 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  DXGMONITOR *v6; // rbx
  unsigned int v7; // edi
  DXGMONITOR *v9; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v10[14]; // [rsp+30h] [rbp-98h] BYREF
  int v11; // [rsp+A0h] [rbp-28h]

  v10[0] = &MonitorEventDeferral::`vftable';
  memset(&v10[1], 0, 0x68uLL);
  v11 = 0;
  MONITOR_MGR::AcquireMonitorExclusive(&v9, (__int64)a1, a2, 0);
  v6 = v9;
  if ( v9 )
  {
    v10[1] = (*((_QWORD *)v9 + 21) + 8LL) & -(__int64)(*((_QWORD *)v9 + 21) != 0LL);
    v7 = DXGMONITOR::OnDescriptorUpdated(
           (DxgMonitor::MonitorColorState **)v9,
           (struct DxgMonitor::IMonitorDeferredEventSource *)v10);
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 24));
    KeLeaveCriticalRegion();
    MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v10, a3);
  }
  else
  {
    v7 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v10);
  return v7;
}
