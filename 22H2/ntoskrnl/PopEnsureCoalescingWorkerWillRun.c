/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x14056EC30
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1406F2B90 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140779AFC (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1408E6900 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
