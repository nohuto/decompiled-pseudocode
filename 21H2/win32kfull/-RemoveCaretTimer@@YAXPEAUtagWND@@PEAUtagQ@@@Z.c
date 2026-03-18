/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C344C
 * Callers:
 *     _SetCaretBlinkTime @ 0x1C009E700 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C00C33BC (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C00C3720 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C010A5AC (zzzSetCaretPos.c)
 * Callees:
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 43) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 43) = 0LL;
  }
}
