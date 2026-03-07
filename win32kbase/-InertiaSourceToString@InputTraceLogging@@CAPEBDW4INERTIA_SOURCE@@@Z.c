const char *__fastcall InputTraceLogging::InertiaSourceToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Touch";
  v2 = v1 - 1;
  if ( !v2 )
    return "Pen";
  v3 = v2 - 2;
  if ( !v3 )
    return "Touchpad";
  v4 = v3 - 4;
  if ( !v4 )
    return "Mousewheel";
  if ( v4 == 7 )
    return "Any";
  return "UNKNOWN";
}
