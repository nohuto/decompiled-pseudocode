/*
 * XREFs of VfIsVerifierEnabled @ 0x1402DA4B0
 * Callers:
 *     IopLoadUnloadDriver @ 0x1406DE800 (IopLoadUnloadDriver.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084EA70 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1409644D8 (KsepPatchDriverImportsTable.c)
 *     MmAddVerifierSpecialThunks @ 0x140969FB0 (MmAddVerifierSpecialThunks.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A0958 (PopDripsWatchdogTakeAction.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x140A6F7A0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140A6F900 (KdExitDebugger.c)
 *     MmIsVerifierEnabled @ 0x140A7BDF0 (MmIsVerifierEnabled.c)
 *     VfDriverUnloadImage @ 0x140A7C248 (VfDriverUnloadImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x140A816C0 (MmIsDriverSuspectForVerifier.c)
 *     ViThunkFindSharedExports @ 0x140A93E84 (ViThunkFindSharedExports.c)
 *     ViThunkGetWdmThunk @ 0x140A93F9C (ViThunkGetWdmThunk.c)
 *     ViThunkHookExportAddress @ 0x140A94030 (ViThunkHookExportAddress.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140A944BC (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140A94590 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
