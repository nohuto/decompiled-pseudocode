/*
 * XREFs of PopThermalSxExit @ 0x14058D8D4
 * Callers:
 *     PopPolicyWorkerAction @ 0x140987130 (PopPolicyWorkerAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCoolingSxTransition @ 0x140584670 (PopCoolingSxTransition.c)
 */

void PopThermalSxExit()
{
  KIRQL v0; // al
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rdi
  void *v9; // rax

  if ( _InterlockedExchange(&PopThermalStateTransitionInProgress, 0) )
  {
    if ( PoResumeFromHibernate )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
      if ( byte_140C3C432 )
      {
        byte_140C3C432 = 0;
        ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL);
      }
      PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
      v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      dword_140C3C34C = -1;
      v1 = v0;
      byte_140C3C348 = 1;
      KxReleaseSpinLock((volatile signed __int64 *)&PopThermalEventTransitionContext);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
          v6 = (v5 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v5;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v1);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    v8 = (PVOID *)PopThermal;
    if ( PopThermal != &PopThermal )
    {
      do
      {
        PopAcquireRwLockExclusive((ULONG_PTR)(v8 + 54));
        v9 = (void *)MEMORY[0xFFFFF78000000008];
        v8[64] = (PVOID)MEMORY[0xFFFFF78000000008];
        v8[65] = v9;
        *((_BYTE *)v8 + 504) = 0;
        PopReleaseRwLock((ULONG_PTR)(v8 + 54));
        v8 = (PVOID *)*v8;
      }
      while ( v8 != &PopThermal );
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    PopCoolingSxTransition(0);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    byte_140C3C430 = 1;
    if ( byte_140C3C431 || byte_140C3C433 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
  }
}
