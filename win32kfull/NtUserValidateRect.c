/*
 * XREFs of NtUserValidateRect @ 0x1C00F3EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxValidateRect @ 0x1C00F3F9C (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+58h] [rbp-20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v13 = *a2;
    a2 = &v13;
  }
  if ( !a1 )
  {
    v6 = 0LL;
    goto LABEL_4;
  }
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
LABEL_4:
    ThreadLock(v6, &v11);
    v4 = xxxValidateRect(v6, a2);
    ThreadUnlock1(v8, v7, v9);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
