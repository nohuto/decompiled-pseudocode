__int64 NtUserDestroyCaret()
{
  __int64 v0; // rbx

  EnterCrit(0LL, 0LL);
  v0 = (int)zzzDestroyCaret();
  UserSessionSwitchLeaveCrit();
  return v0;
}
