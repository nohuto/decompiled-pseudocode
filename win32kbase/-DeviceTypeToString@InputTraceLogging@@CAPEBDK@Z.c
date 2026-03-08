/*
 * XREFs of ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0219BE8
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DeviceTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "Unavailable";
  v1 = a1 - 1;
  if ( !v1 )
    return "Keyboard";
  v2 = v1 - 1;
  if ( !v2 )
    return "Mouse";
  v3 = v2 - 2;
  if ( !v3 )
    return "Touch";
  v4 = v3 - 4;
  if ( !v4 )
    return "Pen";
  v5 = v4 - 10;
  if ( !v5 )
    return "TouchpadMouse";
  if ( v5 == 16 )
    return "InteractiveCtrlMouse";
  return "UNKNOWN";
}
