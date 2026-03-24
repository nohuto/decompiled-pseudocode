/*
 * XREFs of NtUserSetCapture @ 0x1C00DAEB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxSetCapture @ 0x1C00DAF80 (xxxSetCapture.c)
 */

__int64 __fastcall NtUserSetCapture(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v9 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v9;
  *((_QWORD *)&v9 + 1) = v4;
  if ( v4 )
    HMLockObject(v4);
  v6 = (__int64 *)xxxSetCapture(v4);
  if ( v6 )
    v2 = *v6;
  ThreadUnlock1(v7);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
