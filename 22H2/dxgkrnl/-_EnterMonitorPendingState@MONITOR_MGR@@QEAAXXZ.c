/*
 * XREFs of ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C006BEA4
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209E7C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_EnterMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  int v3; // ecx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 3) + 16LL)) )
    WdLogSingleEntry0(1LL);
  v2 = *((_QWORD *)this + 83);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(v2 + 20) = v3 + 1;
    if ( !v3 )
      KeClearEvent((PRKEVENT)(*((_QWORD *)this + 83) + 24LL));
  }
}
