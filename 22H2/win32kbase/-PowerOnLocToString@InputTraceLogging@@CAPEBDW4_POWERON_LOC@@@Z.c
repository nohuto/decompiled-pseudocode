/*
 * XREFs of ?PowerOnLocToString@InputTraceLogging@@CAPEBDW4_POWERON_LOC@@@Z @ 0x1C00D0B48
 * Callers:
 *     ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1C00D0BB8 (-PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C01328E0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PowerOnLocToString(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case -1:
      return "Undefined";
    case 0:
      return "PsW32MonitorOn";
    case 1:
      return "PsW32PostMonitorOn";
    case 2:
      return "PowerStateEndPartitionReplace";
    case 3:
      return "WaitForVideoPortCalloutReady";
    case 4:
      return "RemoteDisconnect";
  }
  result = "PowerStateResumeApps";
  if ( a1 != 5 )
    return "UNKNOWN";
  return result;
}
