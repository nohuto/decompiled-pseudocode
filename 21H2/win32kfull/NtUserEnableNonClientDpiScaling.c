/*
 * XREFs of NtUserEnableNonClientDpiScaling @ 0x1C00048C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0004974 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserEnableNonClientDpiScaling(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BOOL8 v4; // rbx
  struct tagWND *v5; // rdi
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v7 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v7;
    *((_QWORD *)&v7 + 1) = v2;
    HMLockObject(v2);
    v4 = xxxEnableNonClientDpiScaling(v5);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
