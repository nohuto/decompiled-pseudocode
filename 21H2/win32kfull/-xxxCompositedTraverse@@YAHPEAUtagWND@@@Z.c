/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023E388
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023E388 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023E5B0 (xxxCompositedPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00C15B0 (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023E388 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rcx
  int v7; // eax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = 0;
  v9[2] = 0LL;
  if ( *(_QWORD *)(v1 + 136) || (*(_BYTE *)(v1 + 17) & 0x10) != 0 )
  {
    xxxSendMessage((unsigned __int64)a1, 0xFu, 0LL, 0LL);
    v2 = 1;
  }
  v4 = *((_QWORD *)a1 + 14);
  v5 = v4;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 88);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v9;
  v9[1] = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    do
    {
      v7 = xxxCompositedTraverse((struct tagWND *)v5);
      v5 = *(_QWORD *)(v5 + 96);
      if ( v7 )
        v2 = 1;
    }
    while ( ThreadLockExchange(v5, (__int64)v9) && v5 );
  }
  ThreadUnlock1(ThreadWin32Thread);
  return v2;
}
