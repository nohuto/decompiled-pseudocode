/*
 * XREFs of VfIsVerifierEnabled @ 0x1402D3DF0
 * Callers:
 *     IopQueryNameInternal @ 0x140620504 (IopQueryNameInternal.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14076E404 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1408C0458 (KsepPatchDriverImportsTable.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C6490 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C65B0 (MmAddVerifierThunks.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA6A0 (PopDripsWatchdogTakeAction.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x1409991F0 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409B7028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B7190 (KdExitDebugger.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C234C (ViThunkSnapSharedExportByName.c)
 *     VfDriverUnloadImage @ 0x1409C2474 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x1409C2600 (MmIsVerifierEnabled.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D94E8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D95C4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D96B8 (ViThunkReplaceSharedExports.c)
 *     VfFreePoolNotification @ 0x1409E0074 (VfFreePoolNotification.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
