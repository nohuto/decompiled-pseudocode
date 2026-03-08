/*
 * XREFs of _SetCaretBlinkTime @ 0x1C010C2C0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     NtUserSetCaretBlinkTime @ 0x1C010C280 (NtUserSetCaretBlinkTime.c)
 * Callees:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0006294 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003B230 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00E8804 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
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
