__int64 __fastcall CVisualGroup::AppendVisuals(__int64 a1, _QWORD *a2)
{
  struct CVisual **v2; // rbx
  struct CVisual **v4; // rsi
  struct CVisual *v5; // rcx
  int v6; // eax
  CExcludeVisualReference *v7; // rcx
  struct CExcludeVisualReference *v9; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CExcludeVisualReference *v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = (struct CVisual **)a2[1];
  v4 = &v2[*a2];
  while ( v2 != v4 )
  {
    v5 = *v2;
    if ( *v2 )
    {
      v12 = 0LL;
      v9 = 0LL;
      v10 = 1;
      v6 = CExcludeVisualReference::Create(v5, (struct CWeakResourceReference ***)&v9);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          27LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
          (const char *)(unsigned int)v6,
          (int)&v12);
      if ( v10 )
      {
        v7 = v12;
        v12 = v9;
        if ( v7 )
          CExcludeVisualReference::`scalar deleting destructor'(v7);
      }
      std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        (__int64 *)(a1 + 64),
        (__int64 *)&v12);
      if ( v12 )
        CExcludeVisualReference::`scalar deleting destructor'(v12);
    }
    ++v2;
  }
  CResource::NotifyOnChanged(a1, 0, 0LL);
  return 0LL;
}
