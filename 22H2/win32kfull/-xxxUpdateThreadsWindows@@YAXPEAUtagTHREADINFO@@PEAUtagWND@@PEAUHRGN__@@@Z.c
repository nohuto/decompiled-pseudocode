/*
 * XREFs of ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01571A6
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxUpdateWindows @ 0x1C02151D0 (xxxUpdateWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00419D0 (ThreadLockExchangeAlways.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C008B640 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01570E4 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateThreadsWindows(struct tagTHREADINFO *a1, struct tagWND *a2, HRGN a3)
{
  struct tagWND *v4; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[2] = 0LL;
  v4 = a2;
  v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v8;
  for ( v8[1] = 0LL; v4; v4 = (struct tagWND *)*((_QWORD *)v4 + 11) )
  {
    ThreadLockExchangeAlways((__int64)v4, (__int64)v8);
    if ( *((struct tagTHREADINFO **)v4 + 2) == a1 )
      xxxInternalUpdateWindow(v4, 1u);
    else
      xxxUpdateOtherThreadsWindows((struct tagWND **)v4, a3, v6, v7);
  }
  ThreadUnlock1(a1, a2, a3);
}
