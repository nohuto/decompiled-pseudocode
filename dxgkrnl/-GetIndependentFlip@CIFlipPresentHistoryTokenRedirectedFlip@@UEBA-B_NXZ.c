/*
 * XREFs of ?GetIndependentFlip@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA?B_NXZ @ 0x1C00198B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x2000) != 0;
}
