/*
 * XREFs of NtUserValidateRect @ 0x1C00BC290
 * Callers:
 *     <none>
 * Callees:
 *     xxxValidateRect @ 0x1C00BC36C (xxxValidateRect.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  __int128 v16; // [rsp+58h] [rbp-20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v16 = *a2;
    a2 = &v16;
  }
  if ( !a1 )
  {
    v7 = 0LL;
    goto LABEL_4;
  }
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
LABEL_4:
    ThreadLock(v7, &v14);
    v4 = xxxValidateRect(v7, a2);
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
