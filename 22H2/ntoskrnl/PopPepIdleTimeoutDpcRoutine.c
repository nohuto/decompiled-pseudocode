/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140369070
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14030B180 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x140354EF4 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
