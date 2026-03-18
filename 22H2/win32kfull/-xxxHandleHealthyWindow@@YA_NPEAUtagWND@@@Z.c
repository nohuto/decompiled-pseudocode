/*
 * XREFs of ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F493C
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0028948 (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C012A800 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F48A4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4524 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall xxxHandleHealthyWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v4 = 0;
  if ( GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL, a4) )
  {
    v10 = 0LL;
    v11 = 0LL;
    ThreadLockAlways(a1, &v10);
    v4 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1(v7, v6, v8);
  }
  return v4 != 0;
}
