/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01B3604
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C011D490 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserReassociateQueueEventCompletionPacket @ 0x1C01D8E40 (NtUserReassociateQueueEventCompletionPacket.c)
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
