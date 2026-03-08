/*
 * XREFs of ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C0168AEC (MonitorSetLastWireformatAndColorspace.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03BEF88 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03BF560 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableBoostRefreshRateEnabledByDefault @ 0x1C03BF704 (MonitorEnableBoostRefreshRateEnabledByDefault.c)
 *     MonitorSetDriverColorimetryOverride @ 0x1C03C0640 (MonitorSetDriverColorimetryOverride.c)
 *     MonitorSetLastWireformat @ 0x1C03C072C (MonitorSetLastWireformat.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C03C0800 (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C0994 (MonitorSetSDRWhiteLevelOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C03C0AAC (MonitorSetScaleFactorOverride.c)
 *     MonitorSetUsageClass @ 0x1C03C0B64 (MonitorSetUsageClass.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  MONITOR_MGR *v8; // rcx
  __int64 v9; // r8
  struct DXGMONITOR *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a2 + 2920) )
    WdLogSingleEntry0(1LL);
  v8 = *(MONITOR_MGR **)(*(_QWORD *)(a2 + 2920) + 112LL);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a2);
    goto LABEL_7;
  }
  v11 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v8, a3, a4, &v11) < 0 )
  {
LABEL_7:
    *a1 = 0LL;
    return a1;
  }
  LOBYTE(v9) = 1;
  RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(a1, v11, v9);
  return a1;
}
