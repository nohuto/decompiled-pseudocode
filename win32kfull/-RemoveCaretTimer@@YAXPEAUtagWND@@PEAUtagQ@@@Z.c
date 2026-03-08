/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00E8804
 * Callers:
 *     zzzSetCaretPos @ 0x1C0005ED8 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C0006450 (CaretBlinkProc.c)
 *     zzzInternalHideCaret @ 0x1C00E877C (zzzInternalHideCaret.c)
 *     _SetCaretBlinkTime @ 0x1C010C2C0 (_SetCaretBlinkTime.c)
 * Callees:
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 44) )
  {
    FindTimer(a1, (void *)0xFFFF, 2u, 1, 0LL);
    *((_QWORD *)a2 + 44) = 0LL;
  }
}
