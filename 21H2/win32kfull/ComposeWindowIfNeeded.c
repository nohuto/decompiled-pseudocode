/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C004C300
 * Callers:
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C0248120 (SetDisplayAffinity.c)
 * Callees:
 *     ComposeWindow @ 0x1C00353BC (ComposeWindow.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C004C3AC (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C004C5F0 (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E0F0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BF1C (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v7; // rdx
  void *v8; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v4)
    || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v5 = ComposeWindow((struct tagWND *)a1, a2 != 0 ? 13 : 5);
    DirtyVisRgnTrackers(a1);
    v8 = (void *)ReferenceDwmApiPort(*(_QWORD *)(a1 + 40), v7);
    DwmAsyncChildStyleChange(v8);
  }
  else
  {
    return 4063234;
  }
  return v5;
}
