/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1402C9380
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x140262ABC (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x14027A208 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
