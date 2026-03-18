/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00B00B4
 * Callers:
 *     zzzSetCaretPos @ 0x1C0005FC8 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C0006540 (CaretBlinkProc.c)
 *     _SetCaretBlinkTime @ 0x1C0042590 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C00B002C (zzzInternalHideCaret.c)
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 44) )
  {
    FindTimer((__int64)a1, 0xFFFFLL, 2u, 1, 0LL);
    *((_QWORD *)a2 + 44) = 0LL;
  }
}
