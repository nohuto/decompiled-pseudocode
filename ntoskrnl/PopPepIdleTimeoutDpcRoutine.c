/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140355AD0
 * Callers:
 *     <none>
 * Callees:
 *     PopPepArmIdleTimer @ 0x1402E9704 (PopPepArmIdleTimer.c)
 *     ExQueueWorkItemEx @ 0x140353EB0 (ExQueueWorkItemEx.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
