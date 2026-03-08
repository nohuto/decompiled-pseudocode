/*
 * XREFs of ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001EBC
 * Callers:
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C0168CD8 (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03BF7E4 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorSetAdvancedColorParams @ 0x1C03C01F4 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C03C03F8 (MonitorSetAppOverride.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C03C08CC (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00093CC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, struct HDXGMONITOR__ *a2)
{
  __int64 v3; // r8
  struct DXGMONITOR *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorFromHandle(a2, &v5) < 0 )
  {
    *a1 = 0LL;
  }
  else
  {
    LOBYTE(v3) = 1;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(a1, v5, v3);
  }
  return a1;
}
