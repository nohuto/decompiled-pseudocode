/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01DF0A8
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01DF164 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMessage(HWND a1)
{
  __int64 result; // rax
  struct tagWND *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  result = HMValidateHandleNoSecure((int)a1, 1);
  v2 = (struct tagWND *)result;
  if ( result )
  {
    v7[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v7[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v7;
    v7[1] = v2;
    HMLockObject(v2);
    if ( (*((_DWORD *)v2 + 80) & 0x100000) != 0 )
      xxxSendMessage((ULONG_PTR)v2);
    xxxSetWindowPos(v2, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v5, v4, v6);
    return 1LL;
  }
  return result;
}
