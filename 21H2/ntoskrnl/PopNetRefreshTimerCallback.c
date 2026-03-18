/*
 * XREFs of PopNetRefreshTimerCallback @ 0x1405D8850
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

char PopNetRefreshTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetRefreshTimerState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140C1F9A8, DelayedWorkQueue);
  return v0;
}
