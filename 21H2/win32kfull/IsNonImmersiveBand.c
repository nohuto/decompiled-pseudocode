/*
 * XREFs of IsNonImmersiveBand @ 0x1C00AEDA4
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0071CD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00AD3C4 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsImmersiveBand @ 0x1C00AEB40 (IsImmersiveBand.c)
 *     xxxEnableWindow @ 0x1C00AEC3C (xxxEnableWindow.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C01000F4 (IsImmersiveBandOrShellManaged.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01446B8 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0144890 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144914 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     RestoreMonitorsAndWindowsRects @ 0x1C01D2C24 (RestoreMonitorsAndWindowsRects.c)
 *     SnapshotWindowRects @ 0x1C01D31E8 (SnapshotWindowRects.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA64 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
