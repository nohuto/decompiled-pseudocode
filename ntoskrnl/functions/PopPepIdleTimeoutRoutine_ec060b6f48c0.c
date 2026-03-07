__int64 PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  unsigned __int64 v3; // rbp
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v6; // r10
  unsigned int v7; // eax
  __int64 v8; // rax
  int ResidencyIdleState; // eax
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned __int8 v14; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  _DWORD *SchedulerAssist; // r9
  int v21; // eax

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
      ready = PopPepCountReadyActivities(i, 0LL, 3LL);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v6 = 208LL * j + i + 192;
        if ( *(_DWORD *)(v6 + 176) != *(_DWORD *)(v6 + 188) - 1 && !**(_DWORD **)(v6 + 72) && !**(_DWORD **)(v6 + 80) )
        {
          v8 = *(_QWORD *)(v6 + 136);
          if ( v0 > v8 && (unsigned __int64)(v0 - v8) > *(_QWORD *)(v6 + 120) )
          {
            *(_QWORD *)(v6 + 120) = v0 - v8;
            ResidencyIdleState = PopPepComponentGetResidencyIdleState(v6);
            if ( *(_DWORD *)(v11 + 160) != ResidencyIdleState )
            {
              LOBYTE(v10) = 1;
              *(_DWORD *)(v11 + 160) = ResidencyIdleState;
              PopPepUpdateIdleState(i, v11, v10);
            }
          }
        }
      }
      PopPepPromoteActivities(i, 0LL, 3LL);
      v7 = PopPepCountReadyActivities(i, 0LL, 3LL);
      PopPepRequestWork(i, ready, v7);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags )
        goto LABEL_10;
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_10;
      if ( CurrentIrql > 0xFu )
        goto LABEL_10;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_10;
      if ( CurrentIrql < 2u )
        goto LABEL_10;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v18 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( !v18 )
        goto LABEL_10;
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags )
        goto LABEL_10;
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_10;
      if ( v14 > 0xFu )
        goto LABEL_10;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_10;
      if ( v14 < 2u )
        goto LABEL_10;
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( !v18 )
        goto LABEL_10;
    }
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_10:
    __writecr8(v3);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  LOBYTE(v12) = 1;
  return PopPepArmIdleTimer(v12);
}
