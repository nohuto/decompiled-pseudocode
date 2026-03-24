/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403CC128
 * Callers:
 *     IopIncrementVpbRefCount @ 0x14028F728 (IopIncrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x1402D3AF0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402D40D0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402D4340 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402D5350 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1403607CC (IopDecrementDeviceObjectRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140360A10 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoGetDeviceInstanceName @ 0x14036F3E0 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x14036F560 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x1403A4A40 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403DC0D8 (KiMarkBugCheckRegions.c)
 *     sub_1403EB324 @ 0x1403EB324 (sub_1403EB324.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1404F9220 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405030FC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140504464 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14050ACE0 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14050AD48 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14050ADF0 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050AF8C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14050B048 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14050B150 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14050B240 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14050B39C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14050B49C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050B52C (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14050C8F0 (IoRequestDeviceEjectEx.c)
 *     PnpWatchdogBugcheck @ 0x14050EAB0 (PnpWatchdogBugcheck.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140518880 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14052509C (KiRecordRecoveryFailure.c)
 *     MiAddTriageDumpPtes @ 0x1405381AC (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140538BF4 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x140564E84 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x140564F3C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1405650D8 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x140592C24 (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x1405BB548 (WheapAddToDumpFile.c)
 *     IopDestroyDeviceNode @ 0x140695FF4 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x14069C660 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x1406B2E60 (IoGetDevicePropertyData.c)
 *     PnpNotifyDriverCallback @ 0x14071B694 (PnpNotifyDriverCallback.c)
 *     PiDmaGuardProcessPreStart @ 0x14073A784 (PiDmaGuardProcessPreStart.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407419FC (PipProcessEnumeratedChildDevice.c)
 *     IoSetDevicePropertyData @ 0x140743220 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x140748844 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140748CE4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PnpProcessRelation @ 0x14074950C (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x14074B554 (PiDmaGuardProcessPostRemove.c)
 *     IoDisconnectInterrupt @ 0x140761030 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407617EC (IopConnectInterrupt.c)
 *     IoGetDmaAdapter @ 0x1407643C0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407644B8 (PiGetDmaAdapterFromBusInterface.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140764C00 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140764C98 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x14076CEC0 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089BC10 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089BE80 (IoQueryKsrPersistentMemorySize.c)
 *     IoReserveKsrPersistentMemory @ 0x14089C050 (IoReserveKsrPersistentMemory.c)
 *     PipGetDeviceObjectLocation @ 0x14089C594 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x14089C9A8 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x14089D070 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14089D360 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x14089FF30 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1408A0120 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408B130C (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408B15B8 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PopWriteHiberPages @ 0x1409916A0 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994594 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x140996240 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403C9A00 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403CC1A8 (IopAddTriageDumpDataBlock.c)
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
