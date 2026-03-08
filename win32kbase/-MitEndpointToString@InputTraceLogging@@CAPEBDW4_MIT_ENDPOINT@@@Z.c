/*
 * XREFs of ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x1C020B420
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0081280 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MitEndpointToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 10 )
  {
    if ( a1 == 10 )
      return "ForegroundManager";
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return "InputConfig";
      v6 = v5 - 1;
      if ( !v6 )
        return "InputInteropMT";
      v7 = v6 - 1;
      if ( !v7 )
        return "KeyboardInput";
      if ( v7 == 1 )
        return "InvalidateInput";
    }
    else
    {
      if ( a1 == 5 )
        return "PointerInputDown";
      if ( !a1 )
        return "CursorManagement";
      v1 = a1 - 1;
      if ( !v1 )
        return "InputDelivery";
      v2 = v1 - 1;
      if ( !v2 )
        return "InputFocus";
      v3 = v2 - 1;
      if ( !v3 )
        return "KeyboardInputAttempted";
      if ( v3 == 1 )
        return "InputInteropISM";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      return "PenInput";
    v8 = a1 - 11;
    if ( !v8 )
      return "PointerInputObserver";
    v9 = v8 - 1;
    if ( !v9 )
      return "PnpDeviceNotification";
    v10 = v9 - 1;
    if ( !v10 )
      return "KeyboardOverriderInputMessage";
    v11 = v10 - 1;
    if ( !v11 )
      return "HotkeyRegistration";
    if ( v11 == 1 )
      return "MouseInput";
    return "UNKNOWN";
  }
  v12 = a1 - 17;
  if ( !v12 )
    return "AccessibilityTimerNotification";
  v13 = v12 - 1;
  if ( !v13 )
    return "VPTPInterop";
  v14 = v13 - 1;
  if ( !v14 )
    return "InputStreamEnded";
  if ( v14 != 1 )
    return "UNKNOWN";
  return "InputDesktopChanged";
}
