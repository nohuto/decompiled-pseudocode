/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01BA854
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BA8EC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMessage(HWND a1)
{
  __int64 result; // rax
  struct tagWND *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  result = HMValidateHandleNoSecure((int)a1, 1);
  v2 = (struct tagWND *)result;
  if ( result )
  {
    v6 = 0LL;
    v7 = 0LL;
    ThreadLockAlways(result, &v6);
    if ( (*((_DWORD *)v2 + 80) & 0x100000) != 0 )
      xxxSendMessage(v2, 0x2E5u);
    xxxSetWindowPos(v2, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v4, v3, v5);
    return 1LL;
  }
  return result;
}
