/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C00D3A58
 * Callers:
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetDisplayAffinity @ 0x1C022CDDC (SetDisplayAffinity.c)
 * Callees:
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C00D549C (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ebx
  void *v10; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v4)
    || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v5 = ComposeWindow(a1, a2 != 0 ? 13 : 5);
    DirtyVisRgnTrackers(a1);
    v7 = *((_QWORD *)a1 + 5);
    v8 = *(_QWORD *)a1;
    v9 = *(_DWORD *)(v7 + 28);
    v10 = (void *)ReferenceDwmApiPort(v7);
    DwmAsyncChildStyleChange(v10, v8, -16, v9);
  }
  else
  {
    return 4063234;
  }
  return v5;
}
