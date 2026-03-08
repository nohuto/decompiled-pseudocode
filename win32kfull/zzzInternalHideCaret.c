/*
 * XREFs of zzzInternalHideCaret @ 0x1C00E877C
 * Callers:
 *     zzzHideCaret @ 0x1C0006078 (zzzHideCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C00E8694 (zzzInternalDestroyCaret.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0006508 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00E8804 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v0 + 312) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 312) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 316) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 304), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, *(struct tagWND **)(v0 + 304), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
