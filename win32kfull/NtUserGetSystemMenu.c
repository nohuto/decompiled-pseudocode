/*
 * XREFs of NtUserGetSystemMenu @ 0x1C00213D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 */

__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct tagWND *v5; // rdi
  __int64 *SystemMenu; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v11;
    *((_QWORD *)&v11 + 1) = v2;
    HMLockObject(v2);
    SystemMenu = (__int64 *)xxxGetSystemMenu(v5);
    if ( SystemMenu )
      v4 = *SystemMenu;
    ThreadUnlock1(v8, v7, v9);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
