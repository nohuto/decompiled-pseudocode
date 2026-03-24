/*
 * XREFs of ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C00222DC
 * Callers:
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01355E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01391D0 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0181998 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

struct ADAPTER_DISPLAY *__fastcall MONITOR_MGR::_GetDisplayCoreFromMonitor(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v12 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  v5 = v12;
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v9);
  }
  v6 = *((_QWORD *)v5 + 4);
  if ( !v6 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v10);
    v6 = *((_QWORD *)v5 + 4);
  }
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v11);
    v6 = *((_QWORD *)v5 + 4);
  }
  return *(struct ADAPTER_DISPLAY **)(v6 + 8);
}
