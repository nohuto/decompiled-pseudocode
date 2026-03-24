/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C014F88C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C014E780 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C014CD58 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C014F934 (MonitorGetNumConnectedMonitor.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C014FA28 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v4; // rdx
  MONITOR_MGR *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  *a3 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v8);
    }
    v6 = *((_QWORD *)a1 + 337);
    if ( v6 && (v5 = *(MONITOR_MGR **)(v6 + 96)) != 0LL )
    {
      MONITOR_MGR::_IsUsingSimulatedMonitor(v5);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v9 + 24) = a1;
      WdLogEvent5_WdError(v9);
    }
  }
  MonitorGetNumConnectedMonitor(a1);
  return 0LL;
}
