/*
 * XREFs of NtUserUpdateWindows @ 0x1C01E0EA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateWindows @ 0x1C0217D90 (xxxUpdateWindows.c)
 */

__int64 __fastcall NtUserUpdateWindows(__int64 a1, HRGN a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int updated; // ebx
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  updated = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v4;
    HMLockObject(v4);
    updated = xxxUpdateWindows(v7, a2);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return updated;
}
