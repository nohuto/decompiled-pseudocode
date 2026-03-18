/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C00202CC
 * Callers:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C02439D4 (SetDisplayAffinity.c)
 * Callees:
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C002037C (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  void *v5; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2)
    || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v3 = ComposeWindow(a1);
    DirtyVisRgnTrackers(a1);
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v5);
  }
  else
  {
    return 4063234;
  }
  return v3;
}
