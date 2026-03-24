/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1405749C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14027A208 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x140573FD4 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
