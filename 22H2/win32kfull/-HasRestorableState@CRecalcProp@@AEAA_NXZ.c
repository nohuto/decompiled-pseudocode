/*
 * XREFs of ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x1C00C3994
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C23C4 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 * Callees:
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1C00C3808 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1C01355AC (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 */

char __fastcall CRecalcProp::HasRestorableState(const struct tagWND **this, __int64 a2, __int64 a3)
{
  char v4; // bl

  v4 = 0;
  if ( !CRecalcState::IsPendingAndEquivalentMonitorSet(this[4], this[2], a3) )
    return CRecalcProp::FindRestorableRecalcState((CRecalcProp *)this) != 0LL;
  return v4;
}
