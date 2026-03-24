/*
 * XREFs of NtUserGetControlBrush @ 0x1C01509E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlBrush @ 0x1C0150AC4 (xxxGetControlBrush.c)
 */

__int64 __fastcall NtUserGetControlBrush(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 ControlBrush; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  ControlBrush = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v6;
    HMLockObject(v6);
    if ( a2 && a3 - 306 <= 6 )
      ControlBrush = xxxGetControlBrush(v9, a2, a3);
    ThreadUnlock1(v10);
  }
  UserSessionSwitchLeaveCrit(v7);
  return ControlBrush;
}
