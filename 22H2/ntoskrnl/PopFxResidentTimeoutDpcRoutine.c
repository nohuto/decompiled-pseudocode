/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1403228A0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x14026231C (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x140343218 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
