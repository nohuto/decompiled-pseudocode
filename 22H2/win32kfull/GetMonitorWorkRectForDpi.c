/*
 * XREFs of GetMonitorWorkRectForDpi @ 0x1C00AAE34
 * Callers:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00AAC88 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     GetMonitorWorkRect @ 0x1C00C46A8 (GetMonitorWorkRect.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C00D0BA8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 */

_OWORD *__fastcall GetMonitorWorkRectForDpi(_OWORD *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  *a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 44LL);
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_QWORD *)(v7 + 28);
    v9 = ExpandMonitorSpaceVertex(a3, *(unsigned __int16 *)(v7 + 62), v8);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 60LL), v9, v8);
  }
  return a1;
}
