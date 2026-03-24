/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C002B400
 * Callers:
 *     CaretBlinkProc @ 0x1C0029010 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C002B450 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C0033190 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C00674A0 (zzzInternalHideCaret.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 43) )
  {
    FindTimer((__int64)a1, 0xFFFFLL, 2u, 1, 0LL);
    *((_QWORD *)a2 + 43) = 0LL;
  }
}
