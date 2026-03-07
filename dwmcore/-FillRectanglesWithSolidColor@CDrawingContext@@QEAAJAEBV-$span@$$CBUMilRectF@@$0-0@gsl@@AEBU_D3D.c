__int64 __fastcall CDrawingContext::FillRectanglesWithSolidColor(struct CDrawingContext *a1, _OWORD *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  struct CGeometryOnlyDrawListBrush *v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp-10h]
  struct CGeometryOnlyDrawListBrush *v13; // [rsp+80h] [rbp+30h]
  __int64 *v14; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  if ( COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) >= 0.0000011920929 || *((_DWORD *)a1 + 90) || *((_DWORD *)a1 + 85) )
  {
    v13 = 0LL;
    v11 = 0LL;
    v12 = 1;
    v3 = CGeometryOnlyDrawListBrush::Create(&v11);
    if ( v12 )
    {
      v7 = 0LL;
      v13 = v11;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v3, 0x935u, 0LL);
    }
    else
    {
      *((_DWORD *)v13 + 12) = 0;
      *((_BYTE *)v13 + 52) = 1;
      *((_OWORD *)v13 + 2) = 0LL;
      v8 = (__int64 *)v13;
      v13 = 0LL;
      v14 = v8;
      v3 = CDrawingContext::FillRectanglesWithDrawListBrush(a1, &v14, a2, (__int128 *)a3);
      if ( v14 )
        std::default_delete<CDrawListBrush>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v14);
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x93Fu, 0LL);
    }
    if ( v13 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v13, 1);
  }
  return (unsigned int)v3;
}
