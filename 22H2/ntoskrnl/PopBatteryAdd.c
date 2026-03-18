/*
 * XREFs of PopBatteryAdd @ 0x140995030
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1403C5DF8 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x140995BC4 (PopBatteryWaitTag.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C3D0F0 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C3DADE != 1 )
    {
      byte_140C3DADE = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3, v5);
    _m_prefetchw(&PopCadLoadReason);
    if ( !_InterlockedOr(&PopCadLoadReason, 1u) )
      ExQueueWorkItem(&PopCadTriggerDriverLoadWorkItem, DelayedWorkQueue);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C3D0F8 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((__int64 *)&PopCB);
}
