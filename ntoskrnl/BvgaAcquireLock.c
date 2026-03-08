/*
 * XREFs of BvgaAcquireLock @ 0x14054CD30
 * Callers:
 *     BvgaBitBlt @ 0x14054CDD0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14054CE50 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14054CEC0 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14054CFC0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14054D170 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14054D230 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KeTestSpinLock @ 0x1402053F0 (KeTestSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( !KeTestSpinLock(&BootDriverLock) )
      ;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        LODWORD(v2) = 4;
        if ( CurrentIrql != 2 )
          v2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v2;
      }
    }
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
