/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140355670
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x1402E0624 (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x140353EB0 (ExQueueWorkItemEx.c)
 */

void PopFxResidentTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF) )
    PopFxArmResidentTimer(1);
}
