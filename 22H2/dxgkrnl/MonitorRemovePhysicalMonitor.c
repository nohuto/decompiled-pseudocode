/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C03C4890
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01EFB34 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020F55C (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdo @ 0x1C03A9CBC (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01DD878 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x1C02072A0 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C8044 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(
        char *a1,
        __int64 a2,
        __int64 a3,
        bool *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  unsigned __int8 v7; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rbp
  unsigned int v14; // ebx

  v6 = (unsigned int)a2;
  v7 = a3;
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = a1;
  if ( !a1 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  if ( a5 )
  {
    *((_DWORD *)a5 + 9) = v6;
    v10 = *(_QWORD *)(a1 + 404);
    *((_DWORD *)a5 + 10) = 0;
    *(_QWORD *)((char *)a5 + 52) = v10;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v11 = *((_QWORD *)a1 + 365);
  if ( !v11 || (v13 = *(_QWORD *)(v11 + 112)) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v14 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(MONITOR_MGR **)(v11 + 112), v6, v7, a5);
  MONITOR_MGR::_LogMonitorPresentEvent(v13, 2, v6, v14, 0LL);
  anonymous_namespace_::DetermineIfNeedToChangeActivity((DXGADAPTER *)a1, v6, a4);
  return v14;
}
