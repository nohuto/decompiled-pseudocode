/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C00AD384
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 */

__int64 __fastcall GetPrimaryMonitorRectForWindow(__int64 a1, const struct tagWND *a2, __int64 a3, __int64 a4)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2, a3, a4);
  GetMonitorRectForWindow(a1, *(_QWORD *)(DispInfo + 96), a2);
  return a1;
}
