__int64 NtUserHandleSystemThreadCreationFailure()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)HandleSystemThreadCreationFailure();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
