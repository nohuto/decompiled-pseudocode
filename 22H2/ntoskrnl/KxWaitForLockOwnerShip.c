/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14022E810
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x140207B60 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140208B00 (MiAgeWorkingSet.c)
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x140212380 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022C490 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x14022E970 (ExpApplyPriorityBoost.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140235D30 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402424E0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242860 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140293B50 (CcCanIWriteStreamEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14029EDE0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402A9B00 (MiInsertProtectedStandbyPage.c)
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     MiRemoveWsle @ 0x1402B9670 (MiRemoveWsle.c)
 *     MiAgePte @ 0x1402B9AD0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402CC770 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x1402CD0C0 (ExpAcquireResourceExclusiveLite.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     IopCheckDeviceAndDriver @ 0x1402D3AF0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402D40D0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402D4340 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402D5350 (IopIncrementDeviceObjectRefCount.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1402DB910 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationWorkerFactory @ 0x1402DBAE0 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DCAE0 (ExpSetResourceOwnerPointerEx.c)
 *     ExReleaseResourceForThreadLite @ 0x1402F1ED0 (ExReleaseResourceForThreadLite.c)
 *     IopDereferenceVpbAndFree @ 0x1402F4AA0 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x1402F52B0 (IoAcquireCancelSpinLock.c)
 *     IopGetMountFlag @ 0x1403452E0 (IopGetMountFlag.c)
 *     MiZeroLargePageThread @ 0x1403AEB30 (MiZeroLargePageThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 8) |= 1uLL;
  *a2 = a1;
  v4 = 0;
  do
    KeYieldProcessorEx(&v4);
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v4;
}
