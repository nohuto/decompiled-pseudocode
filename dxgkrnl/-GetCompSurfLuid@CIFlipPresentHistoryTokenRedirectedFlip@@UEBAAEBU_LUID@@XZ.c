/*
 * XREFs of ?GetCompSurfLuid@CIFlipPresentHistoryTokenRedirectedFlip@@UEBAAEBU_LUID@@XZ @ 0x1C0019630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _LUID *__fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetCompSurfLuid(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (const struct _LUID *)(*((_QWORD *)this + 1) + 56LL);
}
