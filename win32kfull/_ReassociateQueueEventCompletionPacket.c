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
