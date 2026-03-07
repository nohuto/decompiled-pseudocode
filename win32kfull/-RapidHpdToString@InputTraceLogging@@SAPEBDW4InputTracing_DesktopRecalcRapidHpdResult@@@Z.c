const char *__fastcall InputTraceLogging::RapidHpdToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Succeeded";
  v1 = a1 - 1;
  if ( !v1 )
    return "Comparison Failed";
  v2 = v1 - 1;
  if ( !v2 )
    return "Other Recalcs";
  if ( v2 == 1 )
    return "Session Cleanup";
  return "UNKNOWN";
}
