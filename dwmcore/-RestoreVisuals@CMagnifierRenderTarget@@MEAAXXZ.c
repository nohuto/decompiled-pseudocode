/*
 * XREFs of ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801ED8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180021EDC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180214CF4 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CMagnifierRenderTarget::RestoreVisuals(CComposition **this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  if ( *((_DWORD *)this + 438) )
    CComposition::RestoreCursors(this[2]);
  v2 = this[264];
  if ( v2 )
    CVisualGroup::RestoreVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this[2] + 125);
  if ( v3 )
    CVisualGroup::RestoreVisuals(v3);
}
