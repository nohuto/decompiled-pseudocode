/*
 * XREFs of NtUserCancelQueueEventCompletionPacket @ 0x1C01CE320
 * Callers:
 *     <none>
 * Callees:
 *     _CancelQueueEventCompletionPacket @ 0x1C01B4588 (_CancelQueueEventCompletionPacket.c)
 */

__int64 NtUserCancelQueueEventCompletionPacket()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)CancelQueueEventCompletionPacket();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
