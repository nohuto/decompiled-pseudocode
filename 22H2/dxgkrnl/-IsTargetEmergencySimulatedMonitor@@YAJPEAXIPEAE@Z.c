/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C014CD58
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C014CBB0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C014F88C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C01356A8 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(__int64 a1, __int64 a2, bool *a3)
{
  int MonitorHandle; // ebx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(a1, a2, 0, (void *)0x4D495044, &v8);
  if ( MonitorHandle >= 0 )
  {
    v7 = 0;
    MonitorHandle = MonitorGetMonitorType(v8, &v7);
    if ( MonitorHandle >= 0 )
      *a3 = v7 == 5;
    MonitorReleaseMonitorHandle(a1, (__int64)v8, (void *)0x4D495044);
  }
  return (unsigned int)MonitorHandle;
}
