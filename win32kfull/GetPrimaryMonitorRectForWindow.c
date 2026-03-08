/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C012953C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C0045EF0 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 */

__int64 *__fastcall GetPrimaryMonitorRectForWindow(__int64 *a1, const struct tagWND *a2)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1);
  GetMonitorRectForWindow(a1, *(_QWORD *)(DispInfo + 96), a2);
  return a1;
}
