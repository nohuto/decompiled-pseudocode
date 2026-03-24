/*
 * XREFs of PopNetEvaluationTimerCallback @ 0x1405785C0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 */

char PopNetEvaluationTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetGracePeriodState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140C20A08, DelayedWorkQueue);
  return v0;
}
