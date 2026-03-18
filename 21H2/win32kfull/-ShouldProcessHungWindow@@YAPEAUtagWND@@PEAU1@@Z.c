/*
 * XREFs of ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344
 * Callers:
 *     NtUserQueryWindow @ 0x1C00E1170 (NtUserQueryWindow.c)
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0144890 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01456A8 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(struct tagWND *a1)
{
  __int64 v1; // rbx
  struct tagWND *TopLevelWindow; // rax
  struct tagWND *v3; // rdi

  v1 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  v3 = TopLevelWindow;
  if ( TopLevelWindow
    && (unsigned int)IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow(v3)
    && !GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 900LL), 1u)
    && !(unsigned int)GetWindowCloakState(v3) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
