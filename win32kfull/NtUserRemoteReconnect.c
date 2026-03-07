__int64 __fastcall NtUserRemoteReconnect(__int64 a1)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = xxxRemoteReconnect(a1);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)a1;
}
