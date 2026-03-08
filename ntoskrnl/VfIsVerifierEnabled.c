/*
 * XREFs of VfIsVerifierEnabled @ 0x14036B1B0
 * Callers:
 *     IopLoadUnloadDriver @ 0x140780340 (IopLoadUnloadDriver.c)
 *     KsepPatchDriverImportsTable @ 0x140800258 (KsepPatchDriverImportsTable.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084274C (PipDmgGetDriverDmarCompatLevel.c)
 *     PopDripsWatchdogTakeAction @ 0x14099E1CC (PopDripsWatchdogTakeAction.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2A740 (MmAddVerifierSpecialThunks.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 *     MmIsVerifierEnabled @ 0x140AB9E10 (MmIsVerifierEnabled.c)
 *     VfDriverUnloadImage @ 0x140ABA284 (VfDriverUnloadImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x140ABF060 (MmIsDriverSuspectForVerifier.c)
 *     ViThunkFindSharedExports @ 0x140AD8AC0 (ViThunkFindSharedExports.c)
 *     ViThunkGetWdmThunk @ 0x140AD8BC4 (ViThunkGetWdmThunk.c)
 *     ViThunkHookExportAddress @ 0x140AD8C48 (ViThunkHookExportAddress.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140AD9048 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140AD9108 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
