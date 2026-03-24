/*
 * XREFs of PopNetRefreshTimerCallback @ 0x1405785F0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 */

char PopNetRefreshTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetRefreshTimerState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140C20AC8, DelayedWorkQueue);
  return v0;
}
