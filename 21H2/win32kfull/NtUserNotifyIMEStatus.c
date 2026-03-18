/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C00FE710
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1C00FE7F8 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v6;
    HMLockObject(v6);
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v9, a2, a3);
      v8 = 1LL;
    }
    else
    {
      UserSetLastError(120LL, v10);
    }
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
