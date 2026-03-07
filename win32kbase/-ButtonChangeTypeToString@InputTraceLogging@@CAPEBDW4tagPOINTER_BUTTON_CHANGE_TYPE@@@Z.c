const char *__fastcall InputTraceLogging::ButtonChangeTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return "ThirdDown";
    if ( !a1 )
      return "None";
    v1 = a1 - 1;
    if ( !v1 )
      return "FirstDown";
    v2 = v1 - 1;
    if ( !v2 )
      return "FirstUp";
    v3 = v2 - 1;
    if ( !v3 )
      return "SecondDown";
    if ( v3 == 1 )
      return "SecondUp";
    return "UNKNOWN";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return "ThirdUp";
  v6 = v5 - 1;
  if ( !v6 )
    return "FourthDown";
  v7 = v6 - 1;
  if ( !v7 )
    return "FourthUp";
  v8 = v7 - 1;
  if ( !v8 )
    return "FifthDown";
  if ( v8 != 1 )
    return "UNKNOWN";
  return "FifthUp";
}
