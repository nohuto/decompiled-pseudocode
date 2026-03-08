/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x14056F3E8
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x14039E1A0 (KeDispatchSecondaryInterrupt.c)
 *     KiProcessSecondarySignalList @ 0x14056F7E0 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondarySignalListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v3; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v3) = 4096;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v3;
  }
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KiSecondarySignalListLock);
}
