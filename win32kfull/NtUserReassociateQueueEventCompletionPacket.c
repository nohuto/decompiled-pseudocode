/*
 * XREFs of NtUserReassociateQueueEventCompletionPacket @ 0x1C01D9E70
 * Callers:
 *     <none>
 * Callees:
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01B47C4 (_ReassociateQueueEventCompletionPacket.c)
 */

__int64 NtUserReassociateQueueEventCompletionPacket()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)ReassociateQueueEventCompletionPacket();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
