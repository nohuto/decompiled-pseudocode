/*
 * XREFs of PopFxStartDeviceAccounting @ 0x14056CFBC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

unsigned __int64 PopFxStartDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  ULONG_PTR i; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned int j; // esi
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9

  result = (unsigned int)PopFxDeviceAccountingLevel;
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
          v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
          memset((void *)(i + 632), 0, 0xC0uLL);
          if ( *(_BYTE *)(i + 608) )
            *(_QWORD *)(i + 624) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 600));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
                v9 = (v8 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v8;
                if ( v9 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v4);
        }
        for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j);
          v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 200));
          memset((void *)(v11 + 232), 0, 0xC0uLL);
          if ( *(_BYTE *)(v11 + 208) )
            *(_QWORD *)(v11 + 224) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 200));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v13 = KeGetCurrentIrql();
              if ( v13 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v13 >= 2u )
              {
                v14 = KeGetCurrentPrcb();
                v15 = v14->SchedulerAssist;
                v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
                v9 = (v16 & v15[5]) == 0;
                v15[5] &= v16;
                if ( v9 )
                  KiRemoveSystemWorkPriorityKick((__int64)v14);
              }
            }
          }
          __writecr8(v12);
        }
      }
    }
    v17 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    qword_140C24850 = 0LL;
    qword_140C24858 = 0LL;
    memset(&xmmword_140C24860, 0, 0x50uLL);
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v21 = v19->SchedulerAssist;
          v9 = (v20 & v21[5]) == 0;
          v21[5] &= v20;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
    }
    __writecr8(v17);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  }
  return result;
}
