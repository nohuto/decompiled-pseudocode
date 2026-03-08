/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01BA6CC
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00994C4 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(HWND a1, int a2)
{
  __int64 v3; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v3 = HMValidateHandleNoSecure((int)a1, 1);
  v4 = (struct tagWND *)v3;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 40);
  if ( (*(_DWORD *)(v5 + 288) & 0xFu) - 2 > 1 || *(_WORD *)(v5 + 286) )
    return 0LL;
  v10 = 0LL;
  v11 = 0LL;
  ThreadLockAlways(v3, &v10);
  xxxSendMessage(v4, 739 - (a2 != 0));
  if ( a2 )
    xxxSetWindowPos(v4, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v7, v6, v8);
  return 1LL;
}
