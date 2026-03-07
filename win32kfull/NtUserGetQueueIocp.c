__int64 __fastcall NtUserGetQueueIocp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterSharedCrit(a1, a2, a3);
  v4 = *((_QWORD *)PtiCurrentShared(v3) + 184);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
