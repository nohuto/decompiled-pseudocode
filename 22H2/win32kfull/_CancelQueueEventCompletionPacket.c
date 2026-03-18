/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1C01B33C8
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C011D490 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserCancelQueueEventCompletionPacket @ 0x1C01CD2D0 (NtUserCancelQueueEventCompletionPacket.c)
 * Callees:
 *     <none>
 */

__int64 CancelQueueEventCompletionPacket()
{
  __int64 v0; // rdx

  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1488LL), 0LL) == 259 )
  {
    LOBYTE(v0) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1488LL), v0);
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 1, 0);
  }
  return 1LL;
}
