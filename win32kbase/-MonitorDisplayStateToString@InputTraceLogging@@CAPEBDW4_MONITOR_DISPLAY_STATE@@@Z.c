/*
 * XREFs of ?MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z @ 0x1C00DCE60
 * Callers:
 *     ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x1C00DD5E0 (-UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUES.c)
 *     ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1C00DD828 (-DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MonitorDisplayStateToString(enum _MONITOR_DISPLAY_STATE a1)
{
  int v1; // ecx

  if ( a1 == PowerMonitorOff )
    return "MonitorOff";
  v1 = a1 - 1;
  if ( !v1 )
    return "MonitorOn";
  if ( v1 == 1 )
    return "MonitorDim";
  return "UNKNOWN";
}
