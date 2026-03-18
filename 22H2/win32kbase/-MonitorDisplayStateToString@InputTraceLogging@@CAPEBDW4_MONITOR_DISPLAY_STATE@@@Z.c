/*
 * XREFs of ?MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z @ 0x1C00D05EC
 * Callers:
 *     ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1C00D0E00 (-DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132ECC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
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
