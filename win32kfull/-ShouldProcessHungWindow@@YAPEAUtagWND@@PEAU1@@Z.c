/*
 * XREFs of ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F5038
 * Callers:
 *     NtUserQueryWindow @ 0x1C00A0010 (NtUserQueryWindow.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4E68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F51CC (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F55FC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(struct tagWND *a1)
{
  const struct tagTHREADINFO **TopLevelWindow; // rax
  __int64 v2; // rbx
  const struct tagWND *v3; // rdi

  TopLevelWindow = (const struct tagTHREADINFO **)GetTopLevelWindow((__int64)a1);
  v2 = 0LL;
  v3 = (const struct tagWND *)TopLevelWindow;
  if ( !TopLevelWindow
    || !IsHungWindow(TopLevelWindow)
    || !_ShouldGhostWindow(v3)
    || GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 900LL), 1u) )
  {
    return 0LL;
  }
  if ( !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v3) )
    return v3;
  return (struct tagWND *)v2;
}
