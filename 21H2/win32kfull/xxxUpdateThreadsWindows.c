/*
 * XREFs of xxxUpdateThreadsWindows @ 0x1C02105B8
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxUpdateWindows @ 0x1C023D2E8 (xxxUpdateWindows.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00C9704 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210104 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateThreadsWindows(__int64 a1, struct tagWND *a2, HRGN a3)
{
  struct tagWND *v4; // rbx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[2] = 0LL;
  v4 = a2;
  v7[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v7;
  for ( v7[1] = 0LL; v4; v4 = (struct tagWND *)*((_QWORD *)v4 + 11) )
  {
    ThreadLockExchangeAlways((__int64)v4, (__int64)v7);
    if ( *((_QWORD *)v4 + 2) == a1 )
      xxxInternalUpdateWindow(v4, 1);
    else
      xxxUpdateOtherThreadsWindows((struct tagWND **)v4, a3);
  }
  return ThreadUnlock1(a1, a2, a3);
}
