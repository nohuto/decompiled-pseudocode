/*
 * XREFs of PopBatteryAdd @ 0x140991F80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140829F88 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x140992B14 (PopBatteryWaitTag.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C3CB50 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C3D6FE != 1 )
    {
      byte_140C3D6FE = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3, v5);
    _m_prefetchw(&PopCadLoadReason);
    if ( !_InterlockedOr(&PopCadLoadReason, 1u) )
      ExQueueWorkItem(&PopCadTriggerDriverLoadWorkItem, DelayedWorkQueue);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C3CB58 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
