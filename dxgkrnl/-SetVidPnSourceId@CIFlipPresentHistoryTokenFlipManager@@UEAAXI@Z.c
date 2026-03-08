/*
 * XREFs of ?SetVidPnSourceId@CIFlipPresentHistoryTokenFlipManager@@UEAAXI@Z @ 0x1C0019D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetVidPnSourceId(
        CIFlipPresentHistoryTokenFlipManager *this,
        int a2)
{
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 56LL) = a2;
}
