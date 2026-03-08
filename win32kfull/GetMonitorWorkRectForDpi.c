/*
 * XREFs of GetMonitorWorkRectForDpi @ 0x1C00E1F04
 * Callers:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00E1D58 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00FF4A0 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorWorkRect @ 0x1C0101744 (GetMonitorWorkRect.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C00A3584 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 */

__m128i *__fastcall GetMonitorWorkRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 44LL);
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_QWORD *)(v7 + 28);
    v9 = ExpandMonitorSpaceVertex(a3, *(_WORD *)(v7 + 62), v8);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL), v9, v8);
  }
  return a1;
}
