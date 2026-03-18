/*
 * XREFs of NtUserIsWindowBroadcastingDpiToChildren @ 0x1C0106450
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C006A6D8 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserIsWindowBroadcastingDpiToChildren(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagWND *v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v13 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v13;
    *((_QWORD *)&v13 + 1) = v7;
    HMLockObject(v7);
    v6 = (unsigned __int8)IsWindowBroadcastingDpiToChildrenX(v7);
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
