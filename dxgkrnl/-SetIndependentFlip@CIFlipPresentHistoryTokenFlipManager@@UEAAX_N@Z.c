/*
 * XREFs of ?SetIndependentFlip@CIFlipPresentHistoryTokenFlipManager@@UEAAX_N@Z @ 0x1C0019B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlip(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 24LL) = a2;
}
