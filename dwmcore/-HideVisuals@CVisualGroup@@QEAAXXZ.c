void __fastcall CVisualGroup::HideVisuals(CVisualGroup *this)
{
  CExcludeVisualReference **v1; // r9
  CExcludeVisualReference *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r9
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  while ( v1 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( CExcludeVisualReference::GetVisual(*v1) )
    {
      CExcludeVisualReference::Hide(v3);
      v1 = (CExcludeVisualReference **)(v5 + 8);
    }
    else
    {
      v1 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 64,
                                           &v6,
                                           v4);
    }
  }
}
