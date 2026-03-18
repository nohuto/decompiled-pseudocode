/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x1405D5360
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     PopPepUpdateIdleState @ 0x140354B48 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140354BBC (PopPepComponentGetResidencyIdleState.c)
 *     PopPepCountReadyActivities @ 0x1403565AC (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x14035666C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1403567F8 (PopPepPromoteActivities.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopPepArmIdleTimer @ 0x1405D4A94 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int8 v4; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v6; // r9
  int v7; // eax
  bool v8; // zf
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int ResidencyIdleState; // eax
  unsigned int *v15; // r10
  unsigned int v16; // eax
  unsigned __int8 CurrentIrql; // al
  _DWORD *SchedulerAssist; // r9
  int v19; // eax

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) != 0 )
      continue;
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
    if ( *(_BYTE *)(i + 136) )
    {
      ready = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v11 = 208LL * j + i + 192;
        if ( *(_DWORD *)(v11 + 176) != *(_DWORD *)(v11 + 188) - 1
          && !**(_DWORD **)(v11 + 72)
          && !**(_DWORD **)(v11 + 80) )
        {
          v12 = *(_QWORD *)(v11 + 136);
          if ( v0 > v12 )
          {
            v13 = v0 - v12;
            if ( (unsigned __int64)(v0 - v12) > *(_QWORD *)(v11 + 120) )
            {
              *(_QWORD *)(v11 + 120) = v13;
              ResidencyIdleState = PopPepComponentGetResidencyIdleState(v11, v13);
              if ( v15[40] != ResidencyIdleState )
              {
                v15[40] = ResidencyIdleState;
                PopPepUpdateIdleState(i, v15, 1);
              }
            }
          }
        }
      }
      PopPepPromoteActivities(i, 0LL, 3);
      v16 = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      PopPepRequestWork(ready, v16);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags )
        goto LABEL_27;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_27;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu )
        goto LABEL_27;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_27;
      if ( CurrentIrql < 2u )
        goto LABEL_27;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( !v8 )
        goto LABEL_27;
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags )
        goto LABEL_27;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_27;
      v4 = KeGetCurrentIrql();
      if ( v4 > 0xFu )
        goto LABEL_27;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_27;
      if ( v4 < 2u )
        goto LABEL_27;
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & v6[5]) == 0;
      v6[5] &= v7;
      if ( !v8 )
        goto LABEL_27;
    }
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
LABEL_27:
    __writecr8(v3);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PopPepArmIdleTimer(1);
}
