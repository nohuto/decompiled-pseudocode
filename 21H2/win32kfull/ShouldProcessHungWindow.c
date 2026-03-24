/*
 * XREFs of ShouldProcessHungWindow @ 0x1C0127764
 * Callers:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00037FC (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     NtUserQueryWindow @ 0x1C00415B0 (NtUserQueryWindow.c)
 * Callees:
 *     IsHungWindow @ 0x1C00418B0 (IsHungWindow.c)
 *     GetWindowCloakState @ 0x1C004DC0C (GetWindowCloakState.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01277DC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rdi

  v1 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow
    && (unsigned int)IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow(v3)
    && !GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 900LL), 1LL)
    && !(unsigned int)GetWindowCloakState(v3) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
