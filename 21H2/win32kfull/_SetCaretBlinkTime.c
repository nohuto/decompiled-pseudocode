/*
 * XREFs of _SetCaretBlinkTime @ 0x1C009E700
 * Callers:
 *     NtUserSetCaretBlinkTime @ 0x1C009E6C0 (NtUserSetCaretBlinkTime.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C009EAE0 (CheckWinstaAttributeAccess.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C2E38 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C344C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4984LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v3 + 344) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 296), *(struct tagQ **)(gptiCurrent + 432LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 296), (struct tagQ *)v3);
  }
  return 1LL;
}
