/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x14039E508
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14028E714 (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x14039DF6C (KiConnectSecondaryInterrupt.c)
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056F468 (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x14056F638 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x14056F948 (KiUnmaskSecondaryInterruptInternal.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v5; // rdx

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
  *a2 = CurrentIrql;
  KxAcquireSpinLock(SpinLock);
}
