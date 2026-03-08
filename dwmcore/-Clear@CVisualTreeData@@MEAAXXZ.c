/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18020D750
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180043620 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 49) = 0LL;
}
