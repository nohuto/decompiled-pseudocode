/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C00C85B8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C00D549C (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  void *v3; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1);
    DirtyVisRgnTrackers(a1);
    v3 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5));
    DwmAsyncChildStyleChange(v3);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
