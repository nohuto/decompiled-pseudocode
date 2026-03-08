/*
 * XREFs of ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C014A486
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxUpdateWindows @ 0x1C0217D90 (xxxUpdateWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00DEE6C (ThreadLockExchangeAlways.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0101FD4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C014A3C4 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateThreadsWindows(struct tagTHREADINFO *a1, struct tagWND *a2, HRGN a3)
{
  struct tagWND *v4; // rbx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[2] = 0LL;
  v4 = a2;
  v6[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v6;
  for ( v6[1] = 0LL; v4; v4 = (struct tagWND *)*((_QWORD *)v4 + 11) )
  {
    ThreadLockExchangeAlways((__int64)v4, (__int64)v6);
    if ( *((struct tagTHREADINFO **)v4 + 2) == a1 )
      xxxInternalUpdateWindow(v4, 1u);
    else
      xxxUpdateOtherThreadsWindows((struct tagWND **)v4, a3);
  }
  ThreadUnlock1(a1, a2, a3);
}
