/*
 * XREFs of ?FinalRelease@CVisualTree@@MEAAXXZ @ 0x1800C7420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualTree::FinalRelease(CComposition **this)
{
  CComposition::RemoveVisualTree(this[2], (const struct CVisualTree *)this);
}
