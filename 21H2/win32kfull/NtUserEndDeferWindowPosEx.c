/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C00FB8A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  struct tagSMWP *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = HMValidateHandle(a1, 4u);
  v7 = 0;
  v8 = (struct tagSMWP *)v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL, v5);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v14 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v14;
      *((_QWORD *)&v14 + 1) = v8;
      HMLockObject(v8);
      v7 = xxxEndDeferWindowPosEx(v8, a2);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
