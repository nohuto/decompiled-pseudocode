/*
 * XREFs of MonitorDestroySimulatedMonitor @ 0x1C03BF480
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F7E30 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C03BF2F0 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0167EEC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C3A14 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorDestroySimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  PERESOURCE v8; // rax
  __int64 Blink; // rsi
  unsigned int v11; // ebx

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  v8 = this[365];
  if ( !v8 || (Blink = (__int64)v8[1].SystemResourcesList.Blink) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  v11 = MONITOR_MGR::_HandleRemoveSimulatedMonitor((MONITOR_MGR *)v8[1].SystemResourcesList.Blink, v5, a3);
  MONITOR_MGR::_LogMonitorPresentEvent(Blink, 1073741826, v5, v11, 0LL);
  return v11;
}
