__int64 __fastcall NtUserRemoteNotify(__int64 a1)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = xxxRemoteNotify(a1);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)a1;
}
