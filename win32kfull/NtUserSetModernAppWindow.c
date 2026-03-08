/*
 * XREFs of NtUserSetModernAppWindow @ 0x1C000E140
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 */

__int64 __fastcall NtUserSetModernAppWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  struct tagWND *v5; // rdi
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v7 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v7;
    *((_QWORD *)&v7 + 1) = v2;
    HMLockObject(v2);
    v4 = xxxSetModernAppWindow(v5);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
