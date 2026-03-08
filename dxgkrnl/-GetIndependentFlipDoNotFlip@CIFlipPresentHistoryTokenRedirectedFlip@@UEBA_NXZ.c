/*
 * XREFs of ?GetIndependentFlipDoNotFlip@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1C0019950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipDoNotFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x4000000) != 0;
}
