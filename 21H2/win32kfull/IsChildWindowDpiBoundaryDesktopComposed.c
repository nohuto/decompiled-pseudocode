/*
 * XREFs of IsChildWindowDpiBoundaryDesktopComposed @ 0x1C004C3AC
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C0035334 (DecomposeWindowIfNeeded.c)
 *     ComposeWindowIfNeeded @ 0x1C004C300 (ComposeWindowIfNeeded.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C00706BC (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
