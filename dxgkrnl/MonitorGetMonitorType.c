/*
 * XREFs of MonitorGetMonitorType @ 0x1C017A15C
 * Callers:
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0167480 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C017A5C0 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B9B10 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01E80D0 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F7E30 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00093CC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorType(struct HDXGMONITOR__ *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct DXGMONITOR *v7; // rbx
  struct DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v8 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v8);
  if ( (int)result >= 0 )
  {
    v7 = v8;
    if ( !v8 )
      WdLogSingleEntry0(1LL);
    *a2 = *((_DWORD *)v7 + 78);
    return 0LL;
  }
  return result;
}
