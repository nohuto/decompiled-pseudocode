/*
 * XREFs of IsNonImmersiveBand @ 0x1C0039CB0
 * Callers:
 *     xxxEnableWindow @ 0x1C000AE3C (xxxEnableWindow.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00216FC (IsImmersiveBandOrShellManaged.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0022FA8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0023718 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     IsImmersiveBand @ 0x1C0039C00 (IsImmersiveBand.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0041C80 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00FAA3C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00FBF50 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00FCDBC (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 *     xxxMetricsRecalc @ 0x1C01C9A5C (xxxMetricsRecalc.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F51CC (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5244 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5724 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0229464 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0229878 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0229B90 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230BB0 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
