/*
 * XREFs of ?AddPresentHistoryReference@CIFlipPresentHistoryTokenFlipManager@@UEAAXXZ @ 0x1C0051ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::AddPresentHistoryReference(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  ObReferenceObjectByPointer((PVOID)(*((_QWORD *)this + 1) - 32LL), 3u, g_pDxgkCompositionObjectType, 0);
}
