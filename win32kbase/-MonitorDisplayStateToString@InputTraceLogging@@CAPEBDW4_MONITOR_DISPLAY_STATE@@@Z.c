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
