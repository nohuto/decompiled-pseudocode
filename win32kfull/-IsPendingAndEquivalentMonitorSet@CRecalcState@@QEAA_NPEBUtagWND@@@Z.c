/*
 * XREFs of ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1C00FF2CC
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x1C00FF458 (-HasRestorableState@CRecalcProp@@AEAA_NXZ.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00FF304 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 */

bool __fastcall CRecalcState::IsPendingAndEquivalentMonitorSet(CRecalcState *this, const struct tagWND *a2, __int64 a3)
{
  return ((*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) == 0 || *((_DWORD *)this + 6) == 2)
      && (unsigned int)CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 1LL, a3) == 0;
}
