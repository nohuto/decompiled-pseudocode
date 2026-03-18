/*
 * XREFs of ?GetIndependentFlipReleaseCount@CIFlipPresentHistoryTokenRedirectedFlip@@UEBAIXZ @ 0x1C0019BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipReleaseCount(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return *(_WORD *)(*((_QWORD *)this + 1) + 46LL) & 3;
}
