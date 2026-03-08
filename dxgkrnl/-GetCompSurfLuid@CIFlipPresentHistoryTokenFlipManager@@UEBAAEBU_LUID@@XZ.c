/*
 * XREFs of ?GetCompSurfLuid@CIFlipPresentHistoryTokenFlipManager@@UEBAAEBU_LUID@@XZ @ 0x1C0019610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _LUID *__fastcall CIFlipPresentHistoryTokenFlipManager::GetCompSurfLuid(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 28LL);
}
