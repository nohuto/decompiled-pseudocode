char PopFxResumeDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx
  __int64 v2; // r14
  ULONG_PTR i; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned int j; // esi
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v2 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
      if ( *(_DWORD *)(i + 616) )
      {
        memset((void *)(i + 728), 0, 0x60uLL);
        if ( *(_BYTE *)(i + 608) )
          *(_QWORD *)(i + 624) = v2;
      }
      KxReleaseSpinLock((volatile signed __int64 *)(i + 600));
      v1 = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v1 = (unsigned int)(v4 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v4);
      for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j) + 200LL;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11);
        if ( *(_DWORD *)(v11 + 16) )
        {
          memset((void *)(v11 + 128), 0, 0x60uLL);
          if ( *(_BYTE *)(v11 + 8) )
            *(_QWORD *)(v11 + 24) = v2;
        }
        KxReleaseSpinLock((volatile signed __int64 *)v11);
        v1 = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          v13 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v1 = (unsigned int)(v12 + 1);
            v15 = v14->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v9 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
        __writecr8(v12);
      }
    }
  }
  LOBYTE(v1) = 1;
  PopFxSetGlobalDeviceAccountingEnabled(v1);
  PopFxDeviceAccountingPaused = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
