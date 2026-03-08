/*
 * XREFs of ?GetIndependentFlipCheckNeeded@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x1C0019910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipCheckNeeded(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (*(_BYTE *)(**(_QWORD **)(*((_QWORD *)this + 1) + 64LL) + 1LL) & 2) != 0;
}
