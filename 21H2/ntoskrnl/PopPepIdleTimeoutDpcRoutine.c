/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140574C00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402681A8 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x140574214 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx((ULONG_PTR)&PopPepIdleWorkItem, 1u, -1) )
    PopPepArmIdleTimer(1);
}
