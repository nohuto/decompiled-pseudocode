/*
 * XREFs of ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180028B64
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000B574 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180028AF8 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 * Callees:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180016360 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibilityForOwner(CWindowData *this)
{
  __int64 i; // rbx

  CWindowData::CheckOwnedWindowEligibility(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 142); i = (unsigned int)(i + 1) )
    CWindowData::CheckOwnedWindowEligibility(*(CWindowData **)(*((_QWORD *)this + 68) + 8 * i));
}
