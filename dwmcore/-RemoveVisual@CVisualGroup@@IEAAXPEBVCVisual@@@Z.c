void __fastcall CVisualGroup::RemoveVisual(CVisualGroup *this, const struct CVisual *a2)
{
  CExcludeVisualReference **v2; // r8
  CExcludeVisualReference *v5; // rcx
  __int64 v6; // r8
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  while ( v2 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( !CExcludeVisualReference::GetVisual(*v2) || a2 == CExcludeVisualReference::GetVisual(v5) )
      v2 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 64,
                                           &v7,
                                           v6);
    else
      v2 = (CExcludeVisualReference **)(v6 + 8);
  }
}
