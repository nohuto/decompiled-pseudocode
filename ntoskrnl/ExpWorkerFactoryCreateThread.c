__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  int v1; // r15d
  struct _EX_RUNDOWN_REF *v2; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  int v7; // r12d
  unsigned __int64 OldIrql; // r14
  int UserThread; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF

  v1 = *(_DWORD *)(a1 + 408);
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v5 = 128;
  --CurrentThread->KernelApcDisable;
  v6 = (v1 & 0x800 | 0x80u) >> 7;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 392);
      v7 = *(_DWORD *)(a1 + 408);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      UserThread = RtlpCreateUserThreadEx(*(_QWORD *)(a1 + 40), 0, v6, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
      *(_DWORD *)(a1 + 416) = UserThread;
      v5 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( (v7 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 408) |= 0x8000u;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v11 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v18 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
            {
              v19 = KeGetCurrentPrcb();
              v20 = v19->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v17 = (v21 & v20[5]) == 0;
              v20[5] &= v21;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          __writecr8(v11);
        }
        if ( *(_DWORD *)(a1 + 412) )
          ZwSetInformationThread(0LL, ThreadBasePriority, (PVOID)(a1 + 412), 4u);
        if ( (*(_DWORD *)(a1 + 408) & 0x4000) != 0 )
          ZwSetInformationThread(
            0LL,
            ThreadSuspendCount|ThreadAffinityMask,
            (PVOID)(a1 + 120),
            8 * (unsigned __int16)KiActiveGroups);
        v5 = ZwResumeThread(0LL, 0LL);
        ObCloseHandle(0LL, 0);
LABEL_11:
        ExReleaseRundownProtection_0(v2);
        goto LABEL_12;
      }
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
      --*(_DWORD *)(a1 + 392);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    __writecr8(v12);
    goto LABEL_11;
  }
LABEL_12:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
