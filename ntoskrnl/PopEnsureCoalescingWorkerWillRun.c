/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x14058B560
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x140983FE0 (PopCoalescingNotify.c)
 *     PopEnforceResiliencyScenarios @ 0x140991238 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
