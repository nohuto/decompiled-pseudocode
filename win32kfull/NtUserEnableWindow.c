/*
 * XREFs of NtUserEnableWindow @ 0x1C000AD60
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableWindow @ 0x1C000AE3C (xxxEnableWindow.c)
 */

__int64 __fastcall NtUserEnableWindow(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  struct tagWND *v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v3 = 0;
  v4 = (struct tagWND *)v2;
  if ( v2 && (((*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    *(_QWORD *)&v6 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v6;
    *((_QWORD *)&v6 + 1) = v2;
    HMLockObject(v2);
    v3 = xxxEnableWindow(v4);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
