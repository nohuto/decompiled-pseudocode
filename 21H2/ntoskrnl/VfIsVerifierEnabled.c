/*
 * XREFs of VfIsVerifierEnabled @ 0x140252060
 * Callers:
 *     IopQueryNameInternal @ 0x14068A174 (IopQueryNameInternal.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14076E5C4 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1408C05B8 (KsepPatchDriverImportsTable.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C65F0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C6710 (MmAddVerifierThunks.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA800 (PopDripsWatchdogTakeAction.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14099A1F0 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409B8028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C334C (ViThunkSnapSharedExportByName.c)
 *     VfDriverUnloadImage @ 0x1409C3474 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x1409C3600 (MmIsVerifierEnabled.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409DA4E8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409DA5C4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409DA6B8 (ViThunkReplaceSharedExports.c)
 *     VfFreePoolNotification @ 0x1409E1074 (VfFreePoolNotification.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
