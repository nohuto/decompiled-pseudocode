void PopFxStartDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r15
  ULONG_PTR i; // rbx
  unsigned __int64 v3; // rsi
  unsigned int j; // esi
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8

  if ( PopFxAccountingGroup )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v1 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
        if ( *(_DWORD *)(i + 616) )
        {
          memset((void *)(i + 632), 0, 0xC0uLL);
          if ( *(_BYTE *)(i + 608) )
            *(_QWORD *)(i + 624) = v1;
        }
        KxReleaseSpinLock((volatile signed __int64 *)(i + 600));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v3);
        for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j) + 200LL;
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
          if ( *(_DWORD *)(v5 + 16) )
          {
            memset((void *)(v5 + 32), 0, 0xC0uLL);
            if ( *(_BYTE *)(v5 + 8) )
              *(_QWORD *)(v5 + 24) = v1;
          }
          KxReleaseSpinLock((volatile signed __int64 *)v5);
          if ( KiIrqlFlags )
          {
            v13 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
            {
              v14 = KeGetCurrentPrcb();
              v15 = v14->SchedulerAssist;
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v12 = (v16 & v15[5]) == 0;
              v15[5] &= v16;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          __writecr8(v6);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    qword_140C3EA70 = 0LL;
    qword_140C3EA78 = 0LL;
    memset(&xmmword_140C3EA80, 0, 0x50uLL);
    KxReleaseSpinLock((volatile signed __int64 *)&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = v18->SchedulerAssist;
        v12 = (v19 & v20[5]) == 0;
        v20[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8(v7);
    if ( PopFxAccountingGroup == 1 )
      PopFxResumeDeviceAccounting();
  }
}
