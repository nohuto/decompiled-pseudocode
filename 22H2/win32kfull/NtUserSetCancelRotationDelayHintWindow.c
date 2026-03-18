/*
 * XREFs of NtUserSetCancelRotationDelayHintWindow @ 0x1C01DA9E0
 * Callers:
 *     <none>
 * Callees:
 *     _SetCancelRotationDelayHintWindow @ 0x1C01AE818 (_SetCancelRotationDelayHintWindow.c)
 */

__int64 __fastcall NtUserSetCancelRotationDelayHintWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  if ( v2 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v2;
    HMLockObject(v2);
    v7 = SetCancelRotationDelayHintWindow();
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
