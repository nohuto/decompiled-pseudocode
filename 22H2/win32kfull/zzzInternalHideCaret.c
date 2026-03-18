/*
 * XREFs of zzzInternalHideCaret @ 0x1C00B002C
 * Callers:
 *     zzzHideCaret @ 0x1C0006168 (zzzHideCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C00AFF44 (zzzInternalDestroyCaret.c)
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00065F8 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00B00B4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
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
    xxxWindowEvent(0x8003u, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
