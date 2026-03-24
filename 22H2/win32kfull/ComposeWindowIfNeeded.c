/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C004C260
 * Callers:
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C0247B60 (SetDisplayAffinity.c)
 * Callees:
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C004C30C (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BE7C (IsToplevelWindowDesktopComposed.c)
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
