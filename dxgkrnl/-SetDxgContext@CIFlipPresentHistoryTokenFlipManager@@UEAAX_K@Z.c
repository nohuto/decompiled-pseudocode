/*
 * XREFs of ?SetDxgContext@CIFlipPresentHistoryTokenFlipManager@@UEAAX_K@Z @ 0x1C0019B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetDxgContext(
        CIFlipPresentHistoryTokenFlipManager *this,
        __int64 a2)
{
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 64LL) = a2;
}
