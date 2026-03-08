/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C01A7538
 * Callers:
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowSize @ 0x1C00E8F88 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C01A74FC (ConstrainWindowPos.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
