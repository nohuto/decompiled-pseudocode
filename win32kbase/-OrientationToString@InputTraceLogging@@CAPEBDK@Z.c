const char *__fastcall InputTraceLogging::OrientationToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Identity";
  v2 = v1 - 1;
  if ( !v2 )
    return "Rotate90";
  v3 = v2 - 1;
  if ( !v3 )
    return "Rotate180";
  if ( v3 == 1 )
    return "Rotate270";
  return "UNKNOWN";
}
