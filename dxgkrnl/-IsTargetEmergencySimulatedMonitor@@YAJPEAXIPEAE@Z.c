/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0167480
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C0167338 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01697CC (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C017A15C (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01AE14C (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(void *a1, __int64 a2, unsigned __int8 *a3)
{
  int MonitorHandle; // ebx
  struct HDXGMONITOR__ *v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(a1, a2, 0LL, 1296650308LL, &v7);
  if ( MonitorHandle >= 0 )
  {
    MonitorHandle = MonitorGetMonitorType(v7);
    if ( MonitorHandle >= 0 )
      *a3 = 0;
    MonitorReleaseMonitorHandle(a1, v7, 1296650308LL);
  }
  return (unsigned int)MonitorHandle;
}
