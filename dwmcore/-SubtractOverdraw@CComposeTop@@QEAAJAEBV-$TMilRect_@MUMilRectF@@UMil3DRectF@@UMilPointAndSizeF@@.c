__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1)
{
  int v1; // edi
  __int64 *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  struct CShape *v9; // rdx
  __int64 v10; // rdx
  struct CShape *v11; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v12; // [rsp+38h] [rbp-41h] BYREF
  struct CShape *v13; // [rsp+40h] [rbp-39h] BYREF
  char v14; // [rsp+48h] [rbp-31h]
  _QWORD v15[3]; // [rsp+50h] [rbp-29h] BYREF
  int v16; // [rsp+68h] [rbp-11h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+2Fh]

  v1 = 0;
  v2 = (__int64 *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 160) )
  {
    v11 = 0LL;
    v15[1] = 0LL;
    v16 = 0;
    v17 = 0LL;
    v15[0] = &CRegionShape::`vftable';
    v15[2] = &v16;
    v5 = CMilRectLFromMilRectF(&v12);
    CRegionShape::BuildFromRects(v15, v5, 1LL);
    v6 = *v2;
    v13 = 0LL;
    v12 = &v11;
    v14 = 1;
    v1 = CShape::Combine(v6, v7, v15, a1 + 92, 2, &v13);
    if ( v14 )
    {
      v8 = (unsigned int)v13;
      v9 = *v12;
      *v12 = v13;
      if ( v9 )
        std::default_delete<CShape>::operator()();
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v1, 0xA6u, 0LL);
    }
    else if ( ShapeBoundsEmpty(v11) )
    {
      v10 = *v2;
      *v2 = 0LL;
      if ( v10 )
        std::default_delete<CShape>::operator()();
    }
    else
    {
      std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>(v2, &v11);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v15);
    if ( v11 )
      std::default_delete<CShape>::operator()();
  }
  return (unsigned int)v1;
}
