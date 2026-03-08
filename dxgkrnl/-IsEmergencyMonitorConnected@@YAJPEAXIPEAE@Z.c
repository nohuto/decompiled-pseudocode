/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01697CC
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01695F0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0167480 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C016A9D8 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C016AA40 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01AFF6C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  int v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  *a3 = 0;
  MonitorIsUsingSimulatedMonitor(a1);
  MonitorGetNumConnectedMonitor(a1, &v5);
  return 0LL;
}
