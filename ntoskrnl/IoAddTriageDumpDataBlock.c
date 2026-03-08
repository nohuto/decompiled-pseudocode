/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14038486C
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1402020C0 (IoGetDeviceInstanceName.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140204780 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x14023FD50 (IopIncrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1402F0E78 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x1402F4FC0 (IoInvalidateDeviceRelations.c)
 *     IopCheckDeviceAndDriver @ 0x14030E9F0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14030EE30 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceState @ 0x1403A2700 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403DE604 (KiMarkBugCheckRegions.c)
 *     sub_1403ED56C @ 0x1403ED56C (sub_1403ED56C.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x140545DF8 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14054F674 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1405516E4 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140559658 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405596C0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140559780 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055991C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1405599D8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140559AE0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140559BD0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140559D4C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140559E4C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140559EE0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14055D9D0 (IoRequestDeviceEjectEx.c)
 *     PiProcessDeviceResetAction @ 0x14055DCD8 (PiProcessDeviceResetAction.c)
 *     PnpSaveGlobalsToMinidump @ 0x14055E2C0 (PnpSaveGlobalsToMinidump.c)
 *     PnpWatchdogBugcheck @ 0x14055E314 (PnpWatchdogBugcheck.c)
 *     KiCollectFullProcessName @ 0x14056784C (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567894 (KiCollectTriageDumpDataBlocks.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140568664 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x140578E50 (KiRecordRecoveryFailure.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x140580D7C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x140580EF4 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x14060E748 (WheapAddToDumpFile.c)
 *     MiAddTriageDumpPtes @ 0x14062D454 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x14062E39C (MmSnapTriageDumpInformation.c)
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14068571C (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x1406C3A60 (IoGetDeviceInterfaces.c)
 *     IoDisconnectInterrupt @ 0x1406F41C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     IoGetDevicePropertyData @ 0x1406F7380 (IoGetDevicePropertyData.c)
 *     PiDmaGuardProcessPreStart @ 0x1406F7574 (PiDmaGuardProcessPreStart.c)
 *     IopDestroyDeviceNode @ 0x140782FD0 (IopDestroyDeviceNode.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407F84D0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407F8574 (PiIommuGetInterface.c)
 *     IoGetDmaAdapter @ 0x140821B20 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140821C18 (PiGetDmaAdapterFromBusInterface.c)
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 *     IoSetDevicePropertyData @ 0x140863A80 (IoSetDevicePropertyData.c)
 *     PiDmaGuardProcessPostRemove @ 0x140867254 (PiDmaGuardProcessPostRemove.c)
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086CE8C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoReportTargetDeviceChange @ 0x14087D430 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x14094F530 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x14094F800 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14094FA50 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetDeviceObjectLocation @ 0x14094FFE4 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x1409503F8 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x140950C10 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140950F00 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140953BF0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140953DE0 (IoReportResourceUsage.c)
 *     IoRequestDeviceRemovalForReset @ 0x1409542C0 (IoRequestDeviceRemovalForReset.c)
 *     IopMarkDeviceToBeReset @ 0x140954500 (IopMarkDeviceToBeReset.c)
 *     IopQueueDeviceResetEvent @ 0x14095467C (IopQueueDeviceResetEvent.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140967F1C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmaGuardBlockAddDevice @ 0x1409681DC (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x140968508 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x1409687E0 (PipDmgRequestUpdateConsoleLockState.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA2874 (PopWriteHiberPages.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     ExpInitializeBootEnvironment @ 0x140B48420 (ExpInitializeBootEnvironment.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x1403848EC (IopAddTriageDumpDataBlock.c)
 *     KeAddTriageDumpDataBlock @ 0x1403A29E0 (KeAddTriageDumpDataBlock.c)
 */

char __fastcall IoAddTriageDumpDataBlock(ULONG MaxDataSize, PVOID Address)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  SIZE_T v5; // r9
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+38h] [rbp-10h]

  v7[0] = IopNumTriageDumpDataBlocks;
  v3 = (unsigned int)Address;
  v7[1] = 256;
  v8 = &IopTriageDumpDataBlocks;
  v4 = IopAddTriageDumpDataBlock(1, (unsigned int)v7, (unsigned int)v7, MaxDataSize, (_DWORD)Address);
  IopNumTriageDumpDataBlocks = v7[0];
  if ( IopTriageDumpDataArray )
    KeAddTriageDumpDataBlock(IopTriageDumpDataArray, MaxDataSize, (PVOID)v3, v5);
  return v4;
}
