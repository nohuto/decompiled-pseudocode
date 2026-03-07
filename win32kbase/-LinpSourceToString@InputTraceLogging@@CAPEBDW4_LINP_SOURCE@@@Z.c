const char *__fastcall InputTraceLogging::LinpSourceToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
      return "SessionSwitch";
    if ( !a1 )
      return "Unknown";
    v1 = a1 - 1;
    if ( !v1 )
      return "Keyboard";
    v2 = v1 - 1;
    if ( !v2 )
      return "SipKeyboard";
    v3 = v2 - 1;
    if ( !v3 )
      return "Mouse";
    v4 = v3 - 1;
    if ( !v4 )
      return "HID";
    v5 = v4 - 1;
    if ( !v5 )
      return "PoUserPresent";
    v6 = v5 - 1;
    if ( !v6 )
      return "PoResumeApps";
    v7 = v6 - 1;
    if ( !v7 )
      return "ScreensaveTimeout";
    if ( v7 == 1 )
      return "Activation";
    return "UNKNOWN";
  }
  v9 = a1 - 10;
  if ( !v9 )
    return "DisplayReqest";
  v10 = v9 - 1;
  if ( !v10 )
    return "Touch";
  v11 = v10 - 1;
  if ( !v11 )
    return "AcdcSwitch";
  v12 = v11 - 1;
  if ( !v12 )
    return "Pen";
  v13 = v12 - 1;
  if ( !v13 )
    return "Initialization";
  v14 = v13 - 1;
  if ( !v14 )
    return "PosessionConnect";
  v15 = v14 - 1;
  if ( !v15 )
    return "Accelerometer";
  if ( v15 != 1 )
    return "UNKNOWN";
  return "PrecisionTouchpad";
}
