/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E4738
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006ABEC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, int a2)
{
  __int64 v3; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = HMValidateHandleNoSecure(a1, 1);
  v4 = (struct tagWND *)v3;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 40);
  if ( (*(_DWORD *)(v5 + 288) & 0xF) != 2 || *(_WORD *)(v5 + 286) )
    return 0LL;
  v9[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v9;
  v9[1] = v4;
  HMLockObject(v4);
  xxxSendMessage((unsigned __int64)v4, 739 - (a2 != 0), 0LL, 0LL);
  if ( a2 )
    xxxSetWindowPos(v4, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v7);
  return 1LL;
}
