/*
 * XREFs of PopFxQueueWorkOrder @ 0x140380F98
 * Callers:
 *     PopFxIdleComponent @ 0x140260A50 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A6FE0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B298 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14056B4D4 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x14023B710 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x14025FFDC (PopFxAddRefDevice.c)
 *     KeReleaseSemaphoreEx @ 0x140262770 (KeReleaseSemaphoreEx.c)
 *     ExInterlockedInsertTailList @ 0x1402F86D0 (ExInterlockedInsertTailList.c)
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
      ExInterlockedInsertTailList(&stru_140C24850, (PLIST_ENTRY)a2, &Lock);
      return KeReleaseSemaphoreEx((__int64)&unk_140C24860, 0LL, 1LL, v5, 0);
    }
  }
  return result;
}
