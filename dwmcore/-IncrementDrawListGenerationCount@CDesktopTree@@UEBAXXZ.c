/*
 * XREFs of ?IncrementDrawListGenerationCount@CDesktopTree@@UEBAXXZ @ 0x180111590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTree::IncrementDrawListGenerationCount(CDesktopTree *this)
{
  *((_QWORD *)this + 588) = ++CDesktopTree::s_desktopDrawlistGenerationCount;
}
