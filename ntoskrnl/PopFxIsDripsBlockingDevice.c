/*
 * XREFs of PopFxIsDripsBlockingDevice @ 0x14058854C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140586854 (PopFxBuildDripsBlockingDeviceList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopFxIsDripsBlockingDevice(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v3; // rbx
  char v7; // bp
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned int i; // edi
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax

  v3 = a1 + 600;
  v7 = 0;
  v8 = MEMORY[0xFFFFF78000000008];
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
  if ( *(_DWORD *)(v3 + 16) == 2
    && !PopFxDeviceAccountingPaused
    && *(_BYTE *)(v3 + 8)
    && v8 - *(_QWORD *)(v3 + 24) >= a2 )
  {
    *a3 = -1;
    v7 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
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
  __writecr8(v9);
  for ( i = 0; i < *(_DWORD *)(a1 + 828); ++i )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * i);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 200));
    if ( *(_DWORD *)(v16 + 216) == 2
      && !PopFxDeviceAccountingPaused
      && *(_BYTE *)(v16 + 208)
      && v8 - *(_QWORD *)(v16 + 224) >= a2 )
    {
      v7 = 1;
      *a3 = i;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v16 + 200));
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v18 >= 2u )
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
    __writecr8(v17);
  }
  return v7;
}
