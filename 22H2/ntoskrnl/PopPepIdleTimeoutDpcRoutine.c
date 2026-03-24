/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140574900
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140343218 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x140573F14 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
