const char *__fastcall InputTraceLogging::ContactPopulationSourceToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "DeviceInput";
  v1 = a1 - 1;
  if ( !v1 )
    return "SimulatedKeepAlive";
  if ( v1 == 1 )
    return "SimulatedEndState";
  return "UNKNOWN";
}
