/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C0135648
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C021FB04 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C00CF9A8 (GetMonitorRectForWindow.c)
 */

__int64 __fastcall GetPrimaryMonitorRectForWindow(__int64 a1, const struct tagWND *a2)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1);
  GetMonitorRectForWindow(a1, *(_QWORD *)(DispInfo + 96), a2);
  return a1;
}
