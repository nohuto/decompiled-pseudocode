/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x14056EC40
 * Callers:
 *     DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper @ 0x1405E0150 (DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140336C10 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11
  __int64 v5; // rdx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v5) = 4096;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v5;
  }
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  return KxAcquireQueuedSpinLock(a2, a1);
}
