/*
 * XREFs of ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01B92E4
 * Callers:
 *     GetNewMonitor @ 0x1C010B39C (GetNewMonitor.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B8A28 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 */

_BOOL8 __fastcall IsNewMonitorRectMostOccupied(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  IntersectRect(&v7, &a1->left, &a2->left);
  IntersectRect(&v6, &a1->left, &a3->left);
  return (DWORD2(v7) - (int)v7) * (HIDWORD(v7) - DWORD1(v7)) > (DWORD2(v6) - (int)v6) * (HIDWORD(v6) - DWORD1(v6));
}
