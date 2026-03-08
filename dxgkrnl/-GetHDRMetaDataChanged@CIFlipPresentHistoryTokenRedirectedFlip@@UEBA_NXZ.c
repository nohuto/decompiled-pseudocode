/*
 * XREFs of ?GetHDRMetaDataChanged@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1C00197F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetHDRMetaDataChanged(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x40) != 0;
}
