/*
 * XREFs of PopFxQueueWorkOrder @ 0x1403811A8
 * Callers:
 *     PopFxIdleComponent @ 0x1402826C0 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A7830 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B598 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14056B7D4 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14021D900 (ExInterlockedInsertTailList.c)
 *     PopFxAddRefDevice @ 0x140281C48 (PopFxAddRefDevice.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     ExTryQueueWorkItem @ 0x1402E05F0 (ExTryQueueWorkItem.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 result; // rax
  __int64 v5; // r9

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( (_DWORD)result == 1 )
  {
    if ( a3 )
      PopFxAddRefDevice(a3);
    result = ExTryQueueWorkItem(a2, 0x30u);
    if ( !(_BYTE)result )
    {
      ExInterlockedInsertTailList(&stru_140C248D0, (PLIST_ENTRY)a2, &Lock);
      return KeReleaseSemaphoreEx((__int64)&unk_140C248E0, 0, 1, v5, 0);
    }
  }
  return result;
}
