/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C01BA7A0
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00994C4 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToTopLevelWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  ThreadLockAlways(a1, &v7);
  xxxSendMessage(a1, 0x2E0u);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v4, v3, v5);
  return 1LL;
}
