/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01B47C4
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00470E0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserReassociateQueueEventCompletionPacket @ 0x1C01D9E70 (NtUserReassociateQueueEventCompletionPacket.c)
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1488LL),
    *(_QWORD *)(gptiCurrent + 1464LL),
    *(_QWORD *)(gptiCurrent + 1480LL),
    0LL,
    1LL,
    0,
    0LL,
    0LL);
  return 1LL;
}
