/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01B96B4
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01B974C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
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
      xxxSendMessage((ULONG_PTR)v2);
    xxxSetWindowPos(v2, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v4, v3, v5);
    return 1LL;
  }
  return result;
}
