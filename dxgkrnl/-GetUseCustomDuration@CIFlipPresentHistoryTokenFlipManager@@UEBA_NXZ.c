/*
 * XREFs of ?GetUseCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x1C0051F50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA?BIXZ @ 0x1C0051F10 (-GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA-BIXZ.c)
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetUseCustomDuration(CIFlipPresentHistoryTokenFlipManager *this)
{
  return (unsigned int)CIFlipPresentHistoryTokenFlipManager::GetCustomDuration(this) != 0;
}
