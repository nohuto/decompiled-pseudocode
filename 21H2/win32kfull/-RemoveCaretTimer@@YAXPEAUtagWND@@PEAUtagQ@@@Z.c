/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C002B4A0
 * Callers:
 *     CaretBlinkProc @ 0x1C00290B0 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C002B4F0 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C0033230 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C0067540 (zzzInternalHideCaret.c)
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
