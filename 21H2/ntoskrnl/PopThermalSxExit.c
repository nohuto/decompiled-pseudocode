/*
 * XREFs of PopThermalSxExit @ 0x14038A49C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PopCoolingSxTransition @ 0x14038A8D4 (PopCoolingSxTransition.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopThermalSxExit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  void *v6; // rax

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock(a1, a2);
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    PopReleasePolicyLock(v3, v2);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  v5 = (PVOID *)PopThermal;
  if ( PopThermal != &PopThermal )
  {
    do
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 54));
      v6 = (void *)MEMORY[0xFFFFF78000000008];
      v5[64] = (PVOID)MEMORY[0xFFFFF78000000008];
      v5[65] = v6;
      *((_BYTE *)v5 + 504) = 0;
      PopReleaseRwLock((ULONG_PTR)(v5 + 54));
      v5 = (PVOID *)*v5;
    }
    while ( v5 != &PopThermal );
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  return PopCoolingSxTransition(0LL);
}
