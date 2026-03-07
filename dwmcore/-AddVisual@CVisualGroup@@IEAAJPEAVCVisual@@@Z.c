__int64 __fastcall CVisualGroup::AddVisual(CVisualGroup *this, struct CVisual *a2)
{
  __int64 *v2; // rsi
  CExcludeVisualReference **v4; // r8
  unsigned int v6; // edi
  CExcludeVisualReference *v7; // rcx
  __int64 v8; // r8
  struct CVisual *Visual; // rax
  struct CVisual *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  CExcludeVisualReference *v13; // rcx
  struct CExcludeVisualReference *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  CExcludeVisualReference *v17; // [rsp+70h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  v4 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  v6 = 0;
  while ( v4 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( CExcludeVisualReference::GetVisual(*v4) )
    {
      Visual = CExcludeVisualReference::GetVisual(v7);
      a2 = 0LL;
      if ( v10 != Visual )
        a2 = v10;
    }
    else
    {
      v4 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(v2, &v17, v8);
    }
  }
  if ( a2 )
  {
    v17 = 0LL;
    v15 = 0LL;
    v16 = 1;
    v11 = CExcludeVisualReference::Create(a2, (struct CWeakResourceReference ***)&v15);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x65u, 0LL);
    if ( v16 )
    {
      v13 = v17;
      v17 = v15;
      if ( v13 )
        CExcludeVisualReference::`scalar deleting destructor'(v13);
    }
    std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
      v2,
      (__int64 *)&v17);
    if ( v17 )
      CExcludeVisualReference::`scalar deleting destructor'(v17);
  }
  return v6;
}
