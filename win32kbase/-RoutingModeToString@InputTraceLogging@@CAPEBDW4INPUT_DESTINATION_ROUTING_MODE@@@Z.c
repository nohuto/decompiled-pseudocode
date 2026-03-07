const char *__fastcall InputTraceLogging::RoutingModeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "Default";
  v1 = a1 - 1;
  if ( !v1 )
    return "Observe";
  v2 = v1 - 1;
  if ( !v2 )
    return "ISM";
  v3 = v2 - 1;
  if ( !v3 )
    return "RouteToMT";
  if ( v3 == 1 )
    return "ObserveRawOnly";
  return "UNKNOWN";
}
