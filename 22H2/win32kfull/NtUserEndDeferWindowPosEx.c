/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C010F610
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(unsigned __int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  struct tagSMWP *v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 4u);
  v8 = 0;
  v9 = (struct tagSMWP *)v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL, v5, v7);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v13 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v13;
      *((_QWORD *)&v13 + 1) = v9;
      HMLockObject(v9);
      v8 = xxxEndDeferWindowPosEx(v9, a2);
      ThreadUnlock1(v11);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
