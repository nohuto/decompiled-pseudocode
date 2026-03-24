/*
 * XREFs of PopBatteryAdd @ 0x1408ECE40
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x14039A3BC (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x14079CB48 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1408EDA44 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x1408F5848 (PopCadTriggerDriverLoad.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C23C30 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C233FE != 1 )
    {
      byte_140C233FE = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3);
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C23C38 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
