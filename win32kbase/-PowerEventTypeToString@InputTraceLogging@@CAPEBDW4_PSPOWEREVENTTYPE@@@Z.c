const char *__fastcall InputTraceLogging::PowerEventTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 8 )
  {
    if ( a1 == 8 )
      return "RITActive";
    if ( !a1 )
      return "FullWake";
    v1 = a1 - 1;
    if ( !v1 )
      return "EventCode";
    v2 = v1 - 1;
    if ( !v2 )
      return "SystemPowerState";
    v3 = v2 - 1;
    if ( !v3 )
      return "SystemTime";
    v4 = v3 - 1;
    if ( !v4 )
      return "MonitorOn";
    v5 = v4 - 1;
    if ( !v5 )
      return "MonitorOff";
    v6 = v5 - 1;
    if ( !v6 )
      return "ScreenSaver";
    if ( v6 == 1 )
      return "MonitorDim";
    return "UNKNOWN";
  }
  v8 = a1 - 9;
  if ( !v8 )
    return "RITTimeout";
  v9 = v8 - 1;
  if ( !v9 )
    return "DisplayBurst";
  v10 = v9 - 1;
  if ( !v10 )
    return "MonitorDimPolicy";
  v11 = v10 - 1;
  if ( !v11 )
    return "MonitorOnComplete";
  v12 = v11 - 1;
  if ( !v12 )
    return "SessionOn";
  v13 = v12 - 1;
  if ( !v13 )
    return "SessionOff";
  v14 = v13 - 1;
  if ( !v14 )
    return "BuiltinPanelStateChange";
  if ( v14 != 1 )
    return "UNKNOWN";
  return "MonitorOnUserPresent";
}
