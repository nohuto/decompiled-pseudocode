/*
 * XREFs of PopFxIsDripsBlockingDevice @ 0x14056B3BC
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405698C4 (PopFxBuildDripsBlockingDeviceList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopFxIsDripsBlockingDevice(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  char v6; // bp
  __int64 v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned int i; // ebx
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax

  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008];
  if ( PopFxDeviceAccountingLevel < 0 )
  {
    v8 = a1 + 600;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
    if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
      && *(_BYTE *)(v8 + 8)
      && v7 - *(_QWORD *)(v8 + 24) >= a2 )
    {
      *a3 = -1;
      v6 = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 828); ++i )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * i);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 200));
    if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
      && *(_BYTE *)(v16 + 208)
      && v7 - *(_QWORD *)(v16 + 224) >= a2 )
    {
      v6 = 1;
      *a3 = i;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v16 + 200));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v14 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
    }
    __writecr8(v17);
  }
  return v6;
}
