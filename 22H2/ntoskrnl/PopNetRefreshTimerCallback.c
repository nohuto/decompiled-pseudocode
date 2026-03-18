/*
 * XREFs of PopNetRefreshTimerCallback @ 0x140598FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 */

char PopNetRefreshTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetRefreshTimerState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140C3A288, DelayedWorkQueue);
  return v0;
}
