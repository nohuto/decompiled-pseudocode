/*
 * XREFs of ?SetIndependentFlipRequestDwmConfirm@CIFlipPresentHistoryTokenFlipManager@@UEAAX_N@Z @ 0x1C0019C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipRequestDwmConfirm(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 78LL) = a2;
}
