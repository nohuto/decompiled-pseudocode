/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C01134C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxNotifyIMEStatus @ 0x1C01135A8 (xxxNotifyIMEStatus.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v6;
    HMLockObject(v6);
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v9, a2, a3);
      v8 = 1LL;
    }
    else
    {
      UserSetLastError(120LL, v10, v11);
    }
    ThreadUnlock1(v12);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
