/*
 * XREFs of ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C00D549C
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C00C85B8 (DecomposeWindowIfNeeded.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00F403C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  char v2; // bl

  v2 = 0;
  if ( IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
