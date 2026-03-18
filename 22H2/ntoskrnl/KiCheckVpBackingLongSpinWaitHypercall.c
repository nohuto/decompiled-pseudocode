/*
 * XREFs of KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60
 * Callers:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiWaitForContextSwap @ 0x140222CD8 (KiWaitForContextSwap.c)
 *     KiAddThreadToReadyQueue @ 0x1402348C0 (KiAddThreadToReadyQueue.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     KiAddThreadToPrcbQueue @ 0x140238920 (KiAddThreadToPrcbQueue.c)
 *     KiChooseTargetProcessor @ 0x1402392C0 (KiChooseTargetProcessor.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140250E00 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     MiGetVadWakeList @ 0x14028A050 (MiGetVadWakeList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     ExpQueueWorkItem @ 0x1402B7670 (ExpQueueWorkItem.c)
 *     KeRemovePriQueue @ 0x1402BF080 (KeRemovePriQueue.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C02C0 (KiIpiStallOnPacketTargetsPrcb.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiLockOwnedProtoPage @ 0x1402DD410 (MiLockOwnedProtoPage.c)
 *     KiIpiSendRequestEx @ 0x1402EB5F0 (KiIpiSendRequestEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316B90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KiInitiateGenericCallDpc @ 0x1403469C4 (KiInitiateGenericCallDpc.c)
 *     MiZeroPageCalibrateDpc @ 0x14038B7A0 (MiZeroPageCalibrateDpc.c)
 *     KiIdleLoop @ 0x140423300 (KiIdleLoop.c)
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14045FC88 (KxWaitForLockOwnerShipWithIrql.c)
 * Callees:
 *     <none>
 */

char KiCheckVpBackingLongSpinWaitHypercall()
{
  char v0; // dl
  int v2; // ecx
  __int64 *i; // r8
  __int64 v4; // r10

  v0 = 1;
  if ( KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->SchedulerAssist )
  {
    v2 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      for ( i = KiProcessorBlock; ; ++i )
      {
        if ( (*(_BYTE *)(*i + 35) & 1) != 0 )
        {
          v4 = *(_QWORD *)(*i + 35000);
          if ( !v4 || !*(_BYTE *)(v4 + 65) || !*(_BYTE *)(v4 + 64) )
            break;
        }
        if ( ++v2 >= (unsigned int)KeNumberProcessors_0 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v0;
}
