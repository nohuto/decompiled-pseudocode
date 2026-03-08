/*
 * XREFs of ?GetIndependentFlipTrueImmediate@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1C00199B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipTrueImmediate(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x800000) != 0;
}
