/*
 * XREFs of PopFxQueueWorkOrder @ 0x1402B8CF4
 * Callers:
 *     PoFxCompleteDevicePowerNotRequired @ 0x140302820 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140588718 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140588954 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxQueueWorkItem @ 0x1402B8D54 (PopFxQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x140305F38 (PopFxAddRefDevice.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, ULONG_PTR a2)
{
  void *v2; // rdi
  __int64 result; // rax

  v2 = &PopFxSystemWorkPool;
  if ( (*(_DWORD *)(a2 + 824) & 0x1000) != 0 )
    v2 = &PopFxNoFaultSystemWorkPool;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
  if ( (_DWORD)result == 1 )
  {
    PopFxAddRefDevice(a2);
    return PopFxQueueWorkItem(v2, a1);
  }
  return result;
}
