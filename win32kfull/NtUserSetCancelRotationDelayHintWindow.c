__int64 __fastcall NtUserSetCancelRotationDelayHintWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  if ( v2 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v9;
    *((_QWORD *)&v9 + 1) = v2;
    HMLockObject(v2);
    v4 = SetCancelRotationDelayHintWindow();
    ThreadUnlock1(v6, v5, v7);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
