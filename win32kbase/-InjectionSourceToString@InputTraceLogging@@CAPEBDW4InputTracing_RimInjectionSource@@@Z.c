const char *__fastcall InputTraceLogging::InjectionSourceToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "SynthesizeMitTouchInput";
  v1 = a1 - 1;
  if ( !v1 )
    return "InjectGenericHidInput";
  v2 = v1 - 1;
  if ( !v2 )
    return "InjectKeyboardInput";
  v3 = v2 - 1;
  if ( !v3 )
    return "InjectMouseInput";
  v4 = v3 - 1;
  if ( !v4 )
    return "InjectDeviceInput";
  v5 = v4 - 1;
  if ( !v5 )
    return "InjectPointerInput";
  if ( v5 == 1 )
    return "InjectTouchInput";
  return "UNKNOWN";
}
