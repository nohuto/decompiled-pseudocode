/*
 * XREFs of VfIsVerifierEnabled @ 0x140293860
 * Callers:
 *     IopLoadUnloadDriver @ 0x1407CF3E0 (IopLoadUnloadDriver.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084558C (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x14085E8A8 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A125C (PopDripsWatchdogTakeAction.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D4A0 (MmAddVerifierSpecialThunks.c)
 *     IoShutdownSystem @ 0x140A99BF4 (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140AA36CC (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AB1008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AB1144 (KdEnterDebugger.c)
 *     VfDriverUnloadImage @ 0x140ABDED4 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x140ABE2C0 (MmIsVerifierEnabled.c)
 *     MmIsDriverSuspectForVerifier @ 0x140AC3060 (MmIsDriverSuspectForVerifier.c)
 *     ViThunkFindSharedExports @ 0x140ADCAC0 (ViThunkFindSharedExports.c)
 *     ViThunkGetWdmThunk @ 0x140ADCBC4 (ViThunkGetWdmThunk.c)
 *     ViThunkHookExportAddress @ 0x140ADCC48 (ViThunkHookExportAddress.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140ADD048 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140ADD108 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
