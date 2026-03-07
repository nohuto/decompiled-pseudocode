void __fastcall CMagnifierRenderTarget::HideVisuals(CMagnifierRenderTarget *this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  v2 = *(CVisualGroup **)(*((_QWORD *)this + 2) + 1000LL);
  if ( v2 )
    CVisualGroup::HideVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this + 264);
  if ( v3 )
    CVisualGroup::HideVisuals(v3);
  COffScreenRenderTarget::HideVisuals(this);
}
