/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C0138CBC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowSize @ 0x1C00B03C8 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C0138C80 (ConstrainWindowPos.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
