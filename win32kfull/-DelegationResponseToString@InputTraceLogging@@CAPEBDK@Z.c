const char *__fastcall InputTraceLogging::DelegationResponseToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Reassign";
  v2 = v1 - 1;
  if ( !v2 )
    return "Release";
  if ( v2 == 1 )
    return "Retain";
  return "UNKNOWN";
}
