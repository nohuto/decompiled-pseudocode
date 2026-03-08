/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C002D850
 * Callers:
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C022FAFC (SetDisplayAffinity.c)
 * Callees:
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C002C180 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1, int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  void *v8; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (LOBYTE(v4) = IsDesktopWindow((__int64)a1), v4) && (unsigned int)IsWindowDesktopComposed(v5)
    || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v6 = ComposeWindow(a1, a2 != 0 ? 13 : 5);
    DirtyVisRgnTrackers(a1);
    v8 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v8);
  }
  else
  {
    return 4063234;
  }
  return v6;
}
