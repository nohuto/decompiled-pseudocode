/*
 * XREFs of ?GetIndependentFlip@CIFlipPresentHistoryTokenFlipManager@@UEBA?B_NXZ @ 0x1C0019890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlip(CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 24LL);
}
