/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x140557990
 * Callers:
 *     IopLiveDumpTrace @ 0x140557C8C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140557CD0 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140557D58 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140557E84 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140558010 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14055815C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14055825C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x1405583B8 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055859C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1405586DC (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055882C (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405588B0 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140558AB4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140558B18 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140558C74 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140558DD0 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140558E28 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140558E80 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140558EE0 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140558F98 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055901C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140559194 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140559218 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1405592AC (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140559304 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14055935C (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x14085D704 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14094BB10 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14094C104 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A97494 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A98980 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}
