/*
 * XREFs of ?IsRotation@CRecalcState@@QEBA_NXZ @ 0x1C015CB50
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z @ 0x1C00AF77C (-FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRecalcState::IsRotation(CRecalcState *this)
{
  return *((_DWORD *)this + 16) == 1;
}
