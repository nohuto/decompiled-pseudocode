/*
 * XREFs of IsNonImmersiveBand @ 0x1C00372D4
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003648 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00037FC (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0003880 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     xxxEnableWindow @ 0x1C0037170 (xxxEnableWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C003C690 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CA90 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040980 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006D3A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012C568 (IsImmersiveBandOrShellManaged.c)
 *     SnapshotWindowRects @ 0x1C01D73C8 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D76D4 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D7AFC (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C022360C (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
