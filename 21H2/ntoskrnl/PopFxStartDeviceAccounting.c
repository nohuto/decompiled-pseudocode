/*
 * XREFs of PopFxStartDeviceAccounting @ 0x14039AAB0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char PopFxStartDeviceAccounting()
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  ULONG_PTR i; // rbx
  unsigned int j; // esi
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8

  result = PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v2 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
          memset((void *)(i + 632), 0, 0xC0uLL);
          if ( *(_BYTE *)(i + 608) )
            *(_QWORD *)(i + 624) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 600));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                v13 = (v12 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v12;
                if ( v13 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v8);
        }
        for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j);
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 200));
          memset((void *)(v5 + 232), 0, 0xC0uLL);
          if ( *(_BYTE *)(v5 + 208) )
            *(_QWORD *)(v5 + 224) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 200));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v14 = KeGetCurrentIrql();
              if ( v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
              {
                v15 = KeGetCurrentPrcb();
                v16 = v15->SchedulerAssist;
                v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v13 = (v17 & v16[5]) == 0;
                v16[5] &= v17;
                if ( v13 )
                  KiRemoveSystemWorkPriorityKick(v15);
              }
            }
          }
          __writecr8(v6);
        }
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    qword_140C23D30 = 0LL;
    qword_140C23D38 = 0LL;
    memset(&xmmword_140C23D40, 0, 0x50uLL);
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v21 = v19->SchedulerAssist;
          v13 = (v20 & v21[5]) == 0;
          v21[5] &= v20;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
