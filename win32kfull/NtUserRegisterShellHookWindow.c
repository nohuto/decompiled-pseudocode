/*
 * XREFs of NtUserRegisterShellHookWindow @ 0x1C00ED740
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterShellHookWindow @ 0x1C00ED7F4 (_RegisterShellHookWindow.c)
 */

__int64 __fastcall NtUserRegisterShellHookWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
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
  v4 = 0;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    v4 = RegisterShellHookWindow(v5);
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
