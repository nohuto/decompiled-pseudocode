/*
 * XREFs of NtUserEnableNonClientDpiScaling @ 0x1C01F8110
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableNonClientDpiScaling @ 0x1C01E5DFC (xxxEnableNonClientDpiScaling.c)
 */

__int64 __fastcall NtUserEnableNonClientDpiScaling(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  struct tagWND *v5; // rdi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v8 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v8;
    *((_QWORD *)&v8 + 1) = v2;
    HMLockObject(v2);
    v4 = xxxEnableNonClientDpiScaling(v5);
    ThreadUnlock1(v6);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
