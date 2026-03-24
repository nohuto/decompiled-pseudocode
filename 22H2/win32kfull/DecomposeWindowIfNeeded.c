/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C0035294
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C004C30C (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BE7C (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  void *v4; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow((struct tagWND *)a1);
    DirtyVisRgnTrackers(a1);
    v4 = (void *)ReferenceDwmApiPort(*(_QWORD *)(a1 + 40), v3);
    DwmAsyncChildStyleChange(v4);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
