/*
 * XREFs of ?GetUseCustomDuration@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1C0019A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetUseCustomDuration(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x80000) != 0;
}
