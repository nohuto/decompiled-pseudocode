/*
 * XREFs of ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00FAA3C
 * Callers:
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00FADF0 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00FCDBC (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C0228FD4 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ @ 0x1C00F9240 (-ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ.c)
 */

bool __fastcall CRecalcState::ShouldStoreAfterProcessing(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // r8
  DesktopRecalcSettings *v3; // rcx
  __int64 v4; // r8

  if ( *((_DWORD *)this + 6) == 2
    || !IsNonImmersiveBand((__int64)a2)
    || !*(_QWORD *)(v2 + 72)
    || IsRectEmptyInl((const struct tagRECT *)(v2 + 28)) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v4 + 64) == 1 )
    return 1;
  return DesktopRecalcSettings::ShouldSaveAndRestorePreviousRecalcInfos(v3);
}
