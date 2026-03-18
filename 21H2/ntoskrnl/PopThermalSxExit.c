/*
 * XREFs of PopThermalSxExit @ 0x14038AB60
 * Callers:
 *     PopPolicyWorkerAction @ 0x1407FF440 (PopPolicyWorkerAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     PopCoolingSxTransition @ 0x14038AE58 (PopCoolingSxTransition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

void PopThermalSxExit()
{
  KIRQL v0; // al
  unsigned __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rdi
  void *v4; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  if ( _InterlockedExchange(&PopThermalStateTransitionInProgress, 0) )
  {
    if ( PoResumeFromHibernate )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
      if ( HIBYTE(word_140C22211) )
      {
        HIBYTE(word_140C22211) = 0;
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0LL);
      }
      PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
      v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      dword_140C2216C = -1;
      v1 = v0;
      byte_140C22168 = 1;
      KxReleaseSpinLock(&PopThermalEventTransitionContext);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v9 = (v8 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v8;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    v3 = (PVOID *)PopThermal;
    if ( PopThermal != &PopThermal )
    {
      do
      {
        PopAcquireRwLockExclusive((ULONG_PTR)(v3 + 54));
        v4 = (void *)MEMORY[0xFFFFF78000000008];
        v3[64] = (PVOID)MEMORY[0xFFFFF78000000008];
        v3[65] = v4;
        *((_BYTE *)v3 + 504) = 0;
        PopReleaseRwLock((ULONG_PTR)(v3 + 54));
        v3 = (PVOID *)*v3;
      }
      while ( v3 != &PopThermal );
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    PopCoolingSxTransition(0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    byte_140C22210 = 1;
    if ( (_BYTE)word_140C22211 || byte_140C22213 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
  }
}
