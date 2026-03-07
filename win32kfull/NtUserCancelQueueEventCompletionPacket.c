__int64 NtUserCancelQueueEventCompletionPacket()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)CancelQueueEventCompletionPacket();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
