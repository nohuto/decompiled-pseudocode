void __fastcall CComposition::RestoreDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)g_pComposition + 126);
  if ( v1 )
    CVisualGroup::RestoreVisuals(v1);
}
