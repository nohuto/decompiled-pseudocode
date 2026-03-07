const char *__fastcall InputTraceLogging::OriginIdToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Unavailable";
  v1 = a1 - 1;
  if ( !v1 )
    return "Hardware";
  v2 = v1 - 1;
  if ( !v2 )
    return "Injected";
  if ( v2 == 2 )
    return "System";
  return "UNKNOWN";
}
