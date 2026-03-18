/*
 * XREFs of PopFxQueueWorkOrder @ 0x1403B1998
 * Callers:
 *     PopFxIdleComponent @ 0x140355830 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403B6A70 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405CCAC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CCCFC (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x140355350 (PopFxAddRefDevice.c)
 *     PopFxQueueWorkItem @ 0x1403B19D4 (PopFxQueueWorkItem.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( (_DWORD)result == 1 )
  {
    if ( a3 )
      PopFxAddRefDevice(a3);
    return PopFxQueueWorkItem(a1, a2);
  }
  return result;
}
