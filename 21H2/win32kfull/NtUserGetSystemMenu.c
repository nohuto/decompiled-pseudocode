/*
 * XREFs of NtUserGetSystemMenu @ 0x1C00DC7F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C00DC8C4 (xxxGetSystemMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct tagWND *v4; // rbx
  __int64 *SystemMenu; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  gbValidateHandleForIL = 0;
  v4 = (struct tagWND *)ValidateHwnd(a1);
  if ( v4 )
  {
    *(_QWORD *)&v8 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v8;
    *((_QWORD *)&v8 + 1) = v4;
    HMLockObject(v4);
    SystemMenu = (__int64 *)xxxGetSystemMenu(v4);
    if ( SystemMenu )
      v2 = *SystemMenu;
    ThreadUnlock1(v6);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
