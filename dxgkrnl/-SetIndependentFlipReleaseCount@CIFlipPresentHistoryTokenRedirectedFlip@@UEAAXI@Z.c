/*
 * XREFs of ?SetIndependentFlipReleaseCount@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAXI@Z @ 0x1C0019C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlipReleaseCount(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        int a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) ^= (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) ^ (a2 << 16)) & 0x30000;
}
