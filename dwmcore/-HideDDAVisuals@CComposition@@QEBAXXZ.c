void __fastcall CComposition::HideDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)this + 126);
  if ( v1 )
    CVisualGroup::HideVisuals(v1);
}
