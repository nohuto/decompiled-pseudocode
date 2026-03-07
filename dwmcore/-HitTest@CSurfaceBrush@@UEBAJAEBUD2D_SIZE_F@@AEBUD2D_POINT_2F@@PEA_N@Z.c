__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  CSurfaceBrush *v5; // rsi
  CShape **v9; // rcx
  bool v10; // di
  CShape *v11; // rdx
  int v12; // eax
  struct CShape *v14; // [rsp+38h] [rbp-38h] BYREF
  char v15; // [rsp+40h] [rbp-30h]
  _BYTE v16[40]; // [rsp+48h] [rbp-28h] BYREF
  CShape *v17; // [rsp+90h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (CSurfaceBrush *)((char *)this - 200);
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this - 11) + 16LL))(
         *((_QWORD *)this - 11),
         (char *)this - 200)
    && a2->width > 0.0
    && a2->height > 0.0
    && !(*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v5 + 192LL))(v5) )
  {
    v17 = 0LL;
    v14 = 0LL;
    v15 = 1;
    v10 = (int)CSurfaceBrush::ComputeLayout(v5, a2, (struct CContent::LayoutData *)v16, &v14) >= 0;
    if ( v15 )
    {
      v9 = &v17;
      v11 = v17;
      v17 = v14;
      if ( v11 )
        std::default_delete<CShape>::operator()(&v17, v11);
    }
    if ( v10 )
    {
      v12 = CShape::FillContainsPoint(v17, a3, a4);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v12, 0x1ACu, 0LL);
    }
    if ( v17 )
      std::default_delete<CShape>::operator()(v9, v17);
  }
  return v4;
}
