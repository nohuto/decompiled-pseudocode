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
