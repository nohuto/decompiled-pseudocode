/*
 * XREFs of NtUserSetFocus @ 0x1C0034340
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v9 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v9;
  *((_QWORD *)&v9 + 1) = v4;
  if ( v4 )
    HMLockObject(v4);
  v6 = xxxSetFocus(v4);
  if ( v6 )
    v2 = *(_QWORD *)v6;
  ThreadUnlock1(v7);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
