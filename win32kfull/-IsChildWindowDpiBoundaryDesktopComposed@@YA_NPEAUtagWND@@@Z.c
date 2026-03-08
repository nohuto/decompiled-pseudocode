/*
 * XREFs of ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C002C180
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C00228F4 (DecomposeWindowIfNeeded.c)
 *     ComposeWindowIfNeeded @ 0x1C002D850 (ComposeWindowIfNeeded.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00647C8 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  char v2; // bl

  v2 = 0;
  if ( IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
