__int64 __fastcall CWindowNode::RenderRevealBorder(__int64 a1, __int64 a2, const struct tagRECT *a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 *v9; // r14
  int v10; // eax
  float v11; // xmm1_4
  __int64 v12; // rdx
  struct CShape *v13; // rdx
  CRectanglesShape *v14; // rcx
  __int64 v15; // rcx
  struct CShape *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct CShape *v23; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v24; // [rsp+38h] [rbp-C8h] BYREF
  struct CShape **v25; // [rsp+40h] [rbp-C0h]
  CRectanglesShape *v26; // [rsp+48h] [rbp-B8h] BYREF
  char v27; // [rsp+50h] [rbp-B0h]
  struct _D3DCOLORVALUE v28; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[96]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[96]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 896) )
    v9 = CPtrArrayBase::operator[]((__int64 *)(a1 + 784), 0LL);
  else
    v9 = 0LL;
  if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference((CCompositionSurfaceBitmap *)v9) == 1
    && (*(_DWORD *)(a1 + 752) - *(_DWORD *)(a1 + 744) > a3->right - a3->left
     || *(_DWORD *)(a1 + 756) - *(_DWORD *)(a1 + 748) > a3->bottom - a3->top) )
  {
    CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)v9, &v28);
    v10 = *(_DWORD *)(a2 + 3248);
    if ( v10 )
      v11 = *(float *)(*(_QWORD *)(a2 + 3264) + 4LL * (unsigned int)(v10 - 1));
    else
      v11 = *(float *)&FLOAT_1_0;
    v23 = 0LL;
    v28.a = v28.a * v11;
    CRegionShape::CRegionShape((__int64)v30, (const struct tagRECT *)(a1 + 744));
    CRegionShape::CRegionShape((__int64)v29, a3);
    v26 = 0LL;
    v25 = &v23;
    v27 = 1;
    v4 = CShape::Combine((__int64)v30, v12, (__int64)v29, 0LL, D2D1_COMBINE_MODE_XOR, &v26);
    if ( v27 )
    {
      v14 = v26;
      v13 = *v25;
      *v25 = v26;
      if ( v13 )
        std::default_delete<CShape>::operator()((__int64)v14, (__int64 (__fastcall ***)(_QWORD, __int64))v13);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v4, 0x5C8u, 0LL);
    }
    else if ( a4 )
    {
      v25 = &v24;
      v24 = 0LL;
      v26 = 0LL;
      v27 = 1;
      v4 = CShape::Combine((__int64)v23, (__int64)v13, a4, 0LL, D2D1_COMBINE_MODE_INTERSECT, &v26);
      if ( v27 )
      {
        v16 = *v25;
        *v25 = v26;
        if ( v16 )
          std::default_delete<CShape>::operator()(v15, (__int64 (__fastcall ***)(_QWORD, __int64))v16);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v4, 0x5D1u, 0LL);
      }
      else
      {
        v17 = CDrawingContext::FillShapeWithSolidColor((CDrawingContext *)a2, v24, &v28);
        v4 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x5D4u, 0LL);
      }
      if ( v24 )
        std::default_delete<CShape>::operator()(v18, (__int64 (__fastcall ***)(_QWORD, __int64))v24);
    }
    else
    {
      v19 = CDrawingContext::FillShapeWithSolidColor((CDrawingContext *)a2, v23, &v28);
      v4 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x5D8u, 0LL);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v29);
    CRegionShape::~CRegionShape((CRegionShape *)v30);
    if ( v23 )
      std::default_delete<CShape>::operator()(v21, (__int64 (__fastcall ***)(_QWORD, __int64))v23);
  }
  return (unsigned int)v4;
}
