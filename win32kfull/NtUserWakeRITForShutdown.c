__int64 NtUserWakeRITForShutdown()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = WakeRITForShutdown();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
