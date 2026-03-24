/*
 * XREFs of NtUserValidateRect @ 0x1C0124060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxValidateRect @ 0x1C0124198 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rdi
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int128 *v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+58h] [rbp-20h] BYREF

  v2 = a2;
  v10 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (__int128 *)MmUserProbeAddress;
    v13 = *v2;
    v10 = &v13;
  }
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
      goto LABEL_7;
  }
  else
  {
    v6 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v11 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v11;
  *((_QWORD *)&v11 + 1) = v6;
  if ( v6 )
    HMLockObject(v6);
  v4 = xxxValidateRect(v6, v10);
  ThreadUnlock1(v8);
LABEL_7:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
