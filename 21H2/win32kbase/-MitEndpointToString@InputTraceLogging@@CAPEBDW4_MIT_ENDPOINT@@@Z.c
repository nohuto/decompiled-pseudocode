/*
 * XREFs of ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x1C01DBDC0
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
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
  int v15; // ecx

  if ( a1 <= 11 )
  {
    if ( a1 == 11 )
      return "ForegroundManager";
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return "PointerInputDown";
      v6 = v5 - 1;
      if ( !v6 )
        return "InputConfig";
      v7 = v6 - 1;
      if ( !v7 )
        return "InputInteropMT";
      v8 = v7 - 1;
      if ( !v8 )
        return "KeyboardInput";
      if ( v8 == 1 )
        return "InvalidateInput";
    }
    else
    {
      if ( a1 == 5 )
        return "InputInteropISM";
      if ( !a1 )
        return "DeviceIdentification";
      v1 = a1 - 1;
      if ( !v1 )
        return "CursorManagement";
      v2 = v1 - 1;
      if ( !v2 )
        return "InputDelivery";
      v3 = v2 - 1;
      if ( !v3 )
        return "InputFocus";
      if ( v3 == 1 )
        return "KeyboardInputAttempted";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 17 )
  {
    if ( a1 == 17 )
      return "PenInput";
    v9 = a1 - 12;
    if ( !v9 )
      return "PointerInputObserver";
    v10 = v9 - 1;
    if ( !v10 )
      return "PnpDeviceNotification";
    v11 = v10 - 1;
    if ( !v11 )
      return "KeyboardOverriderInputMessage";
    v12 = v11 - 1;
    if ( !v12 )
      return "HotkeyRegistration";
    if ( v12 == 1 )
      return "MouseInput";
    return "UNKNOWN";
  }
  v13 = a1 - 18;
  if ( !v13 )
    return "AccessibilityTimerNotification";
  v14 = v13 - 1;
  if ( !v14 )
    return "VPTPInterop";
  v15 = v14 - 1;
  if ( !v15 )
    return "InputStreamEnded";
  if ( v15 != 1 )
    return "UNKNOWN";
  return "InputDesktopChanged";
}
