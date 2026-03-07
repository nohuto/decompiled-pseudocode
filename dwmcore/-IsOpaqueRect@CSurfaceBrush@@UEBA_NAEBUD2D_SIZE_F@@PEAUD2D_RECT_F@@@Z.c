char __fastcall CSurfaceBrush::IsOpaqueRect(CSurfaceBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  struct CShape *v8; // rcx
  bool v9; // di
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  CShape *v12; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v13[40]; // [rsp+28h] [rbp-58h] BYREF
  struct CShape *v14[2]; // [rsp+50h] [rbp-30h] BYREF
  char v15; // [rsp+60h] [rbp-20h]
  _BYTE v16[12]; // [rsp+68h] [rbp-18h] BYREF
  float v17; // [rsp+74h] [rbp-Ch]

  if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 192LL))(this)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 14) + 8LL))(
          *((_QWORD *)this + 14),
          this) )
  {
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *, _BYTE *))(**((_QWORD **)this + 14) + 24LL))(
         *((_QWORD *)this + 14),
         this,
         v16)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - 1.0) & _xmm) < 0.0000011920929 )
  {
    width = a2->width;
    height = a2->height;
    a3->left = 0.0;
    a3->top = 0.0;
    a3->right = width;
    a3->bottom = height;
    return 0;
  }
  v12 = 0LL;
  v14[1] = 0LL;
  v14[0] = (struct CShape *)&v12;
  v15 = 1;
  v9 = (int)CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v13, &v14[1]) >= 0;
  if ( v15 )
  {
    v8 = v14[0];
    v10 = *(__int64 (__fastcall ****)(_QWORD, __int64))v14[0];
    *(_QWORD *)v14[0] = v14[1];
    if ( v10 )
      std::default_delete<CShape>::operator()((__int64)v8, v10);
  }
  if ( !v9
    || !CShape::IsAxisAlignedRectangle(v12)
    || (*(_OWORD *)v14 = 0LL,
        (*(int (__fastcall **)(CShape *, struct CShape **, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v14, 0LL) < 0) )
  {
    if ( v12 )
      std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
    return 0;
  }
  *a3 = *(struct D2D_RECT_F *)v14;
  if ( v12 )
    std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
  return 1;
}
