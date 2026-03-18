/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C00A6110
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1C00A61F8 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  struct tagWND *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v6;
    HMLockObject(v6);
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v12, a2, a3);
      v11 = 1LL;
    }
    else
    {
      UserSetLastError(120LL);
    }
    ThreadUnlock1(v14, v13, v15);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
