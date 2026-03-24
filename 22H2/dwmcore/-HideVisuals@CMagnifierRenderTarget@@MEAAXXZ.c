/*
 * XREFs of ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18018B260
 * Callers:
 *     <none>
 * Callees:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801ABD80 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CMagnifierRenderTarget::HideVisuals(CMagnifierRenderTarget *this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  v2 = *(CVisualGroup **)(*((_QWORD *)this + 2) + 848LL);
  if ( v2 )
    CVisualGroup::HideVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this + 266);
  if ( v3 )
    CVisualGroup::HideVisuals(v3);
  COffScreenRenderTarget::HideVisuals(this);
}
