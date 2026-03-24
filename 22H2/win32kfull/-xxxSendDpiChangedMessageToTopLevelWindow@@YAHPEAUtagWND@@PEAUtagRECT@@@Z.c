/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0127730
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006AB4C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToTopLevelWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  v7[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v7;
  v7[1] = a1;
  HMLockObject(a1);
  xxxSendMessage(
    (unsigned __int64)a1,
    0x2E0u,
    *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 284LL) | (unsigned __int64)(*(unsigned __int16 *)(*((_QWORD *)a1 + 5)
                                                                                                + 284LL) << 16),
    (struct _LARGE_STRING *)a2);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v5);
  return 1LL;
}
