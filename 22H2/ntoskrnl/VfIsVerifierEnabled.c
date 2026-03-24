/*
 * XREFs of VfIsVerifierEnabled @ 0x14032D0E0
 * Callers:
 *     IopQueryNameInternal @ 0x140620924 (IopQueryNameInternal.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14076DAD4 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1408C04A8 (KsepPatchDriverImportsTable.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C64E0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C6600 (MmAddVerifierThunks.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA6F0 (PopDripsWatchdogTakeAction.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x1409991E0 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409B7028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B7190 (KdExitDebugger.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C235C (ViThunkSnapSharedExportByName.c)
 *     VfDriverUnloadImage @ 0x1409C2484 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x1409C2610 (MmIsVerifierEnabled.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D94F8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D95D4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D96C8 (ViThunkReplaceSharedExports.c)
 *     VfFreePoolNotification @ 0x1409E0084 (VfFreePoolNotification.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
