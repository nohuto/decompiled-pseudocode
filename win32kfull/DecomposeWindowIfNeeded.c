/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C00228F4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C002C180 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  void *v3; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed() || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1);
    DirtyVisRgnTrackers(a1);
    v3 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v3);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
