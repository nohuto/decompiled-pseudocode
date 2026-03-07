__int64 __fastcall NtUserSetMessageExtraInfo(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  v3 = *(_QWORD *)(v2 + 408);
  *(_QWORD *)(v2 + 408) = a1;
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
