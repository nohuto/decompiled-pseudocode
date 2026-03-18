/*
 * XREFs of _SetCaretBlinkTime @ 0x1C0042590
 * Callers:
 *     NtUserSetCaretBlinkTime @ 0x1C0042550 (NtUserSetCaretBlinkTime.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0006384 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C00438D0 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00B00B4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4984LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v3 + 352) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 304), *(struct tagQ **)(gptiCurrent + 432LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 304), (struct tagQ *)v3);
  }
  return 1LL;
}
