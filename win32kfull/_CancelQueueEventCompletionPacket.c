/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1C01B4588
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00470E0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserCancelQueueEventCompletionPacket @ 0x1C01CE320 (NtUserCancelQueueEventCompletionPacket.c)
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
