/*
 * XREFs of NtUserSetModernAppWindow @ 0x1C000EE80
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 */

__int64 __fastcall NtUserSetModernAppWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  struct tagWND *v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    v7 = xxxSetModernAppWindow(v8);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
