const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  if ( a1 <= 7 )
  {
    if ( a1 == 7 )
      return "Beep";
    if ( !a1 )
      return "UIPI";
    v1 = a1 - 1;
    if ( !v1 )
      return "InputSuppressed";
    v2 = v1 - 1;
    if ( !v2 )
      return "InputBlocked";
    v3 = v2 - 1;
    if ( !v3 )
      return "KeyboardHook";
    v4 = v3 - 1;
    if ( !v4 )
      return "AltTabCancel";
    v5 = v4 - 1;
    if ( !v5 )
      return "RawInputMode";
    if ( v5 == 1 )
      return "SAS";
    return "UNKNOWN";
  }
  v7 = a1 - 8;
  if ( !v7 )
    return "MapScancode";
  v8 = v7 - 1;
  if ( !v8 )
    return "NoVKey";
  v9 = v8 - 1;
  if ( !v9 )
    return "RemoteWinKey";
  v10 = v9 - 1;
  if ( !v10 )
    return "AccessibilityProc";
  v11 = v10 - 1;
  if ( !v11 )
    return "OEMProc";
  v12 = v11 - 1;
  if ( !v12 )
    return "NLSProc";
  if ( v12 != 1 )
    return "UNKNOWN";
  return "LocaleProc";
}
