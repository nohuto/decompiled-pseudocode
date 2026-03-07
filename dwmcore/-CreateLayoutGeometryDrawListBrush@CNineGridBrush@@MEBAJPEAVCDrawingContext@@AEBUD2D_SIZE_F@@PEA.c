__int64 __fastcall CNineGridBrush::CreateLayoutGeometryDrawListBrush(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  CGeometryOnlyDrawListBrush *v11; // rcx
  int v12; // ebx
  FLOAT width; // xmm1_4
  CGeometryOnlyDrawListBrush *v14; // rax
  FLOAT height; // xmm0_4
  char v16; // r9
  CNineGridDrawListBrush *v17; // rcx
  int LayoutGeometryDrawListBrush; // eax
  __int64 v20; // rcx
  CNineGridDrawListBrush *v21; // [rsp+30h] [rbp-50h] BYREF
  struct CGeometryOnlyDrawListBrush *v22[2]; // [rsp+38h] [rbp-48h] BYREF
  char v23; // [rsp+48h] [rbp-38h]
  _DWORD v24[4]; // [rsp+50h] [rbp-30h] BYREF
  struct CDrawingContext *v25; // [rsp+60h] [rbp-20h]
  CNineGridDrawListBrush *v26; // [rsp+68h] [rbp-18h] BYREF
  char v27; // [rsp+70h] [rbp-10h]
  CGeometryOnlyDrawListBrush *v28; // [rsp+B0h] [rbp+30h] BYREF

  if ( *((_BYTE *)this + 80) && *((_BYTE *)this + 152) )
  {
    v7 = *((float *)this + 25) * *((float *)this + 24);
    v28 = 0LL;
    v8 = *((float *)this + 27) * *((float *)this + 26);
    v22[0] = (struct CGeometryOnlyDrawListBrush *)&v28;
    *(float *)v24 = v7;
    v9 = *((float *)this + 29) * *((float *)this + 28);
    v22[1] = 0LL;
    *(float *)&v24[1] = v8;
    v10 = *((float *)this + 31) * *((float *)this + 30);
    v23 = 1;
    *(float *)&v24[2] = v9;
    *(float *)&v24[3] = v10;
    v12 = CGeometryOnlyDrawListBrush::Create(&v22[1]);
    if ( v23 )
    {
      v11 = *(CGeometryOnlyDrawListBrush **)v22[0];
      *(_QWORD *)v22[0] = v22[1];
      if ( v11 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v11, 1);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v12, 0x1F0u, 0LL);
    }
    else
    {
      width = a3->width;
      v14 = v28;
      height = a3->height;
      v22[0] = 0LL;
      *((_BYTE *)v28 + 52) = 1;
      *((_DWORD *)v14 + 12) = 50529027;
      v22[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v26 = 0LL;
      v27 = 1;
      *((_OWORD *)v14 + 2) = *(_OWORD *)v22;
      v16 = *((_BYTE *)this + 152);
      v25 = (struct CDrawingContext *)&v21;
      v22[0] = v28;
      v21 = 0LL;
      v28 = 0LL;
      v12 = CNineGridDrawListBrush::Create((struct CNineGridDrawListBrush *)v22, (int)v24, (int)v24, v16, &v26);
      if ( v22[0] )
        std::default_delete<CDrawListBrush>::operator()((__int64)v17, (__int64 (__fastcall ***)(_QWORD, __int64))v22[0]);
      if ( v27 )
      {
        v17 = *(CNineGridDrawListBrush **)v25;
        *(_QWORD *)v25 = v26;
        if ( v17 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v17, 1);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v12, 0x1F9u, 0LL);
        if ( v21 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v21, 1);
      }
      else
      {
        *a4 = v21;
        v21 = 0LL;
      }
    }
    if ( v28 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v28, 1);
  }
  else
  {
    LayoutGeometryDrawListBrush = CBrush::CreateLayoutGeometryDrawListBrush(this, a2, a3, a4);
    v12 = LayoutGeometryDrawListBrush;
    if ( LayoutGeometryDrawListBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, LayoutGeometryDrawListBrush, 0x1FFu, 0LL);
  }
  return (unsigned int)v12;
}
