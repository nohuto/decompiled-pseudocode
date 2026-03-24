/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E482C
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E48EC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

unsigned __int64 __fastcall xxxSendGDIScaledDpiChangedMessage(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF

  result = HMValidateHandleNoSecure(a1, 1);
  v2 = result;
  if ( result )
  {
    v5[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v5[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v5;
    v5[1] = v2;
    HMLockObject(v2);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 232LL) & 0x20000000) != 0 )
      xxxSendMessage(v2, 0x2E5u, 0LL, 0LL);
    xxxSetWindowPos((struct tagWND *)v2, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v4);
    return 1LL;
  }
  return result;
}
