/*
 * XREFs of ?GetIndependentFlipCandidate@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1C00198F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipCandidate(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x200000) != 0;
}
