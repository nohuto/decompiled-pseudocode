/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C01D04F0
 * Callers:
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowPos @ 0x1C00669F0 (ConstrainWindowPos.c)
 *     ConstrainWindowSize @ 0x1C006A18C (ConstrainWindowSize.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
