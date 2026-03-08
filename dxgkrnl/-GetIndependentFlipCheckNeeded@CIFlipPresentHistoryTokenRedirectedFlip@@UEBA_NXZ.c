/*
 * XREFs of ?GetIndependentFlipCheckNeeded@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1C0019930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipCheckNeeded(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x400000) != 0;
}
