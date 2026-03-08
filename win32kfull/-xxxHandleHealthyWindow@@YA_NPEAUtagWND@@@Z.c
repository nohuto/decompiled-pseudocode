/*
 * XREFs of ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F5B3C
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0028FFC (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C00719A0 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F5AA4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5724 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall xxxHandleHealthyWindow(struct tagWND *a1)
{
  int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u) )
  {
    v7 = 0LL;
    v8 = 0LL;
    ThreadLockAlways(a1, &v7);
    v1 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1(v4, v3, v5);
  }
  return v1 != 0;
}
