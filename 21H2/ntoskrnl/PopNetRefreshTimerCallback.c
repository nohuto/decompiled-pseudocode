/*
 * XREFs of PopNetRefreshTimerCallback @ 0x1405786B0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 */

char PopNetRefreshTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetRefreshTimerState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140C20A28, DelayedWorkQueue);
  return v0;
}
