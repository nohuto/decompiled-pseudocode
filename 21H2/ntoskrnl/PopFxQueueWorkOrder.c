/*
 * XREFs of PopFxQueueWorkOrder @ 0x140381658
 * Callers:
 *     PopFxIdleComponent @ 0x1402611F0 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A76E0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B358 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14056B594 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x14023BDA0 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x14026077C (PopFxAddRefDevice.c)
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     ExInterlockedInsertTailList @ 0x1402A0380 (ExInterlockedInsertTailList.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 result; // rax
  _DWORD *v5; // r9

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( (_DWORD)result == 1 )
  {
    if ( a3 )
      PopFxAddRefDevice(a3);
    result = ExTryQueueWorkItem(a2, 0x30u);
    if ( !(_BYTE)result )
    {
      ExInterlockedInsertTailList(&stru_140C24970, (PLIST_ENTRY)a2, &Lock);
      return KeReleaseSemaphoreEx((__int64)&unk_140C24980, 0LL, 1LL, v5, 0);
    }
  }
  return result;
}
