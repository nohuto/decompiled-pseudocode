/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403AC964
 * Callers:
 *     IopCheckDeviceAndDriver @ 0x1402AF020 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402AF410 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402AFD80 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B00F0 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x140302780 (IopIncrementVpbRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D550 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoGetDeviceInstanceName @ 0x140321B38 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x140358990 (IoInvalidateDeviceRelations.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1403690A4 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceState @ 0x1403A7470 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403E3B24 (KiMarkBugCheckRegions.c)
 *     sub_1403F2A8C @ 0x1403F2A8C (sub_1403F2A8C.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x140548298 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551B14 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140553B84 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055BAF8 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055BB60 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055BC20 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055BDBC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055BE78 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055BF80 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055C070 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055C1EC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055C2EC (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C380 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 *     PiProcessDeviceResetAction @ 0x140560178 (PiProcessDeviceResetAction.c)
 *     PnpSaveGlobalsToMinidump @ 0x140560760 (PnpSaveGlobalsToMinidump.c)
 *     PnpWatchdogBugcheck @ 0x1405607B4 (PnpWatchdogBugcheck.c)
 *     KiCollectFullProcessName @ 0x140569CEC (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140569D34 (KiCollectTriageDumpDataBlocks.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x14056AB04 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14057B360 (KiRecordRecoveryFailure.c)
 *     PopInternalAddToDumpFile @ 0x1405831F0 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405832AC (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x140583424 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x140610B68 (WheapAddToDumpFile.c)
 *     MiAddTriageDumpPtes @ 0x14062F8D4 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x14063081C (MmSnapTriageDumpInformation.c)
 *     IoGetDeviceInterfaces @ 0x1406878A0 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     IoDisconnectInterrupt @ 0x14078E6E0 (IoDisconnectInterrupt.c)
 *     IopDestroyDeviceNode @ 0x14078E9E0 (IopDestroyDeviceNode.c)
 *     IopConnectInterrupt @ 0x14078EC70 (IopConnectInterrupt.c)
 *     PiDmaGuardProcessPreStart @ 0x140791224 (PiDmaGuardProcessPreStart.c)
 *     IoGetDevicePropertyData @ 0x1407914F0 (IoGetDevicePropertyData.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x140795B1C (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407FD160 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407FD204 (PiIommuGetInterface.c)
 *     IoGetDmaAdapter @ 0x140829B90 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140829C88 (PiGetDmaAdapterFromBusInterface.c)
 *     IoSetDevicePropertyData @ 0x140866AD0 (IoSetDevicePropertyData.c)
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x14086A254 (PiDmaGuardProcessPostRemove.c)
 *     PiQueryPowerRelations @ 0x14086F044 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086F3AC (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoReportTargetDeviceChange @ 0x1408821E0 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x140952550 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140952820 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140952A70 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetDeviceObjectLocation @ 0x140953004 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x140953418 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x140953C30 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140953F20 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140956C10 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140956E00 (IoReportResourceUsage.c)
 *     IoRequestDeviceRemovalForReset @ 0x1409572E0 (IoRequestDeviceRemovalForReset.c)
 *     IopMarkDeviceToBeReset @ 0x140957520 (IopMarkDeviceToBeReset.c)
 *     IopQueueDeviceResetEvent @ 0x14095769C (IopQueueDeviceResetEvent.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14096AF3C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmaGuardBlockAddDevice @ 0x14096B1FC (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14096B528 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x14096B800 (PipDmgRequestUpdateConsoleLockState.c)
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140AA28E0 (PopEndMirroring.c)
 *     PopRequestWrite @ 0x140AA4070 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA5AA4 (PopWriteHiberPages.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     ExpInitializeBootEnvironment @ 0x140B6DD60 (ExpInitializeBootEnvironment.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403A7970 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403AC9E4 (IopAddTriageDumpDataBlock.c)
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
