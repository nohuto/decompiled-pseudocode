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
