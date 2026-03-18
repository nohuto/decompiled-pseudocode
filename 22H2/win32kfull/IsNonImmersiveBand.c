/*
 * XREFs of IsNonImmersiveBand @ 0x1C00CEFB4
 * Callers:
 *     xxxEnableWindow @ 0x1C000BA8C (xxxEnableWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C005CF68 (IsImmersiveBandOrShellManaged.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C005FEFC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00C0A08 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00C1F1C (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00C2B6C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 *     IsImmersiveBand @ 0x1C00CEF04 (IsImmersiveBand.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00D27A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxMetricsRecalc @ 0x1C01C88FC (xxxMetricsRecalc.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F3FCC (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4044 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4524 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0226760 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0226B68 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0226E7C (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE9C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
