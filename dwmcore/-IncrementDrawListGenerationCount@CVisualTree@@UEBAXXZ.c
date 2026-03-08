/*
 * XREFs of ?IncrementDrawListGenerationCount@CVisualTree@@UEBAXXZ @ 0x1801115C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualTree::IncrementDrawListGenerationCount(CVisualTree *this)
{
  ++*((_QWORD *)this + 588);
}
