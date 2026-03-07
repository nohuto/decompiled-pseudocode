const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 <= 6 )
  {
    if ( a1 == 6 )
      return "DevicePaused";
    if ( !a1 )
      return "NoMonitor";
    v1 = a1 - 1;
    if ( !v1 )
      return "TouchpadDisabled";
    v2 = v1 - 1;
    if ( !v2 )
      return "TouchDisabled";
    v3 = v2 - 1;
    if ( !v3 )
      return "InvalidInputConfig";
    v4 = v3 - 1;
    if ( !v4 )
      return "InputFiltered";
    if ( v4 == 1 )
      return "InputSuppressed";
    return "UNKNOWN";
  }
  v6 = a1 - 7;
  if ( !v6 )
    return "FifoOverflow";
  v7 = v6 - 1;
  if ( !v7 )
    return "FifoCleared";
  v8 = v7 - 1;
  if ( !v8 )
    return "UnknownDeviceType";
  v9 = v8 - 1;
  if ( !v9 )
    return "DelayedPnp";
  if ( v9 != 1 )
    return "UNKNOWN";
  return "SuppressedByObserver";
}
