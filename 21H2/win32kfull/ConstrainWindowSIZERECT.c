/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C01D0AB0
 * Callers:
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowPos @ 0x1C0066A90 (ConstrainWindowPos.c)
 *     ConstrainWindowSize @ 0x1C006A22C (ConstrainWindowSize.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
