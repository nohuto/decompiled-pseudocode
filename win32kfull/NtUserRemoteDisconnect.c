__int64 NtUserRemoteDisconnect()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteDisconnect();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
