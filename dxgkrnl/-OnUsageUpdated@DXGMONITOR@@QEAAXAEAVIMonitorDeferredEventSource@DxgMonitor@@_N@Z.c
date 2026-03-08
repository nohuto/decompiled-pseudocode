/*
 * XREFs of ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C0201834
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     MonitorSetAppOverride @ 0x1C03C03F8 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C03C0B64 (MonitorSetUsageClass.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C01FA228 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C02019C0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C03C4C30 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::OnUsageUpdated(
        DXGMONITOR *this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2,
        char a3)
{
  bool v6; // zf
  int v7; // ecx

  v6 = *((_QWORD *)this + 56) == 0LL;
  v7 = *(_DWORD *)(*((_QWORD *)this + 30) + 16LL);
  if ( !v6 != (v7 == 0) )
  {
    if ( v7 )
    {
      DXGMONITOR::_DestroyTtmDevice(this);
      if ( a3 )
        (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
          a2,
          *((unsigned int *)this + 45),
          10LL);
      DXGMONITOR::_UpdateLinkInfo(this, *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) != 0);
    }
    else
    {
      DXGMONITOR::_CreateTtmDevice(this);
      if ( a3 )
        (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
          a2,
          *((unsigned int *)this + 45),
          10LL);
    }
  }
}
