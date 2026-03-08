/*
 * XREFs of NtUserUpdateWindow @ 0x1C00E55A0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0101FD4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall NtUserUpdateWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    v4 = 1LL;
    xxxInternalUpdateWindow(v5, 1u);
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
