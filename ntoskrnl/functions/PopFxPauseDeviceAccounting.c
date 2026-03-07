char PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // r14
  ULONG_PTR i; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned int j; // esi
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rcx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax

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
        PopFxUpdateAccountingActiveTime(i + 600, v1, 0x47868C00uLL);
        PopFxMergeActiveTimeAccounting(v4);
      }
      KxReleaseSpinLock((volatile signed __int64 *)(i + 600));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v3);
      for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j) + 200LL;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11);
        if ( *(_DWORD *)(v11 + 16) )
        {
          PopFxUpdateAccountingActiveTime(v11, v1, 0x47868C00uLL);
          PopFxMergeActiveTimeAccounting(v13);
        }
        KxReleaseSpinLock((volatile signed __int64 *)v11);
        if ( KiIrqlFlags )
        {
          v14 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v9 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v15);
          }
        }
        __writecr8(v12);
      }
    }
  }
  PopFxSetGlobalDeviceAccountingEnabled(0LL);
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
