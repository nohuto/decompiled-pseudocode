/*
 * XREFs of NtUserGetControlBrush @ 0x1C01D1E90
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlBrush @ 0x1C02269BC (xxxGetControlBrush.c)
 */

__int64 __fastcall NtUserGetControlBrush(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 ControlBrush; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  ControlBrush = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v6;
    HMLockObject(v6);
    if ( a2 && a3 - 306 <= 6 )
      ControlBrush = xxxGetControlBrush(v9, a2, a3);
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v7);
  return ControlBrush;
}
