/*
 * XREFs of HvlNotifyLongSpinWait @ 0x1403C8170
 * Callers:
 *     KiIpiSendRequestEx @ 0x14021238C (KiIpiSendRequestEx.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140237680 (KiIpiStallOnPacketTargetsPrcb.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14024F7D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1402584D0 (KiAddThreadToPrcbQueue.c)
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     MiLockOwnedProtoPage @ 0x1402871A0 (MiLockOwnedProtoPage.c)
 *     MiGetVadWakeList @ 0x140289A20 (MiGetVadWakeList.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWaitForContextSwap @ 0x1402A77E8 (KiWaitForContextSwap.c)
 *     KiInitiateGenericCallDpc @ 0x1402DC9E4 (KiInitiateGenericCallDpc.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     MiZeroPageCalibrateDpc @ 0x140389C70 (MiZeroPageCalibrateDpc.c)
 *     KiIdleLoop @ 0x14041AF70 (KiIdleLoop.c)
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140457CE8 (KxWaitForLockOwnerShipWithIrql.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallInitiateHypercall(65544LL, a1, 0LL);
}
