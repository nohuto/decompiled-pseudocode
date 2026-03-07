__int64 __fastcall CDesktopTree::SetRootVisual(CComposition ***this, struct CVisual *a2)
{
  unsigned int v4; // ebx
  int inserted; // eax
  __int64 v6; // rcx

  v4 = 0;
  CVisual::RemoveAllChildren(this[590]);
  if ( a2 )
  {
    inserted = CVisual::InsertChild((CVisual *)this[590], a2, 0LL, 1);
    v4 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, inserted, 0x1A5u, 0LL);
  }
  return v4;
}
