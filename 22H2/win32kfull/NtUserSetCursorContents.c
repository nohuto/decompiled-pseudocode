/*
 * XREFs of NtUserSetCursorContents @ 0x1C0201540
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01685C0 (-zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 */

__int64 __fastcall NtUserSetCursorContents(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagCURSOR *v7; // rsi
  struct tagCURSOR *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 3u);
  v6 = 0LL;
  v7 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v8 = (struct tagCURSOR *)HMValidateHandle(a2, 3u);
    if ( v8 )
    {
      v12[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v12;
      v12[1] = v7;
      HMLockObject(v7);
      v6 = (unsigned __int8)zzzSetCursorContents(v7, v8);
      ThreadUnlock1(v10);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
