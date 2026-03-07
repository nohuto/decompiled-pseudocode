__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r15
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  char v7; // al
  float m11; // xmm6_4
  float m12; // xmm7_4
  FLOAT v10; // xmm1_4
  FLOAT v11; // xmm0_4
  FLOAT v12; // xmm1_4
  int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  struct D2D_RECT_F v21; // xmm0
  void *v22; // rcx
  bool v23; // zf
  __int64 v25; // rax
  float v26; // xmm7_4
  struct D2D_MATRIX_3X2_F *v27; // [rsp+28h] [rbp-69h]
  char v28; // [rsp+38h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v29; // [rsp+48h] [rbp-49h] BYREF
  __int64 v30; // [rsp+60h] [rbp-31h]
  struct D2D_RECT_F v31; // [rsp+68h] [rbp-29h] BYREF
  _OWORD *v32; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v33; // [rsp+80h] [rbp-11h]
  __int64 *v34; // [rsp+88h] [rbp-9h]
  _BYTE v35[16]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 9);
  v2 = (CNineGridDrawListBrush *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v1 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v1 + 24);
  CDrawListBrush::CopyPrimitiveClamp(this, (const struct CDrawListBrush *)v1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 72) + 8LL))(*(_QWORD *)(v4 + 72), 2LL);
  v6 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    if ( *(_BYTE *)(v6 + 148) )
      *((_QWORD *)this + 7) = *(_QWORD *)(v6 + 136);
    v7 = *(_BYTE *)(v6 + 148);
LABEL_5:
    *((_BYTE *)this + 64) = v7;
    goto LABEL_6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL) )
  {
    v25 = *((_QWORD *)this + 9);
    if ( *(_BYTE *)(v25 + 64) )
      *((_QWORD *)this + 7) = *(_QWORD *)(v25 + 56);
    v7 = *(_BYTE *)(v25 + 64);
    goto LABEL_5;
  }
LABEL_6:
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v29, &v29.m12, &v29.m21, v27);
  m11 = v29.m11;
  m12 = v29.m12;
  v28 = *((_BYTE *)this + 568);
  v10 = v29.m12 * *((float *)this + 9);
  v31.left = v29.m11 * *((float *)this + 8);
  v11 = v29.m11 * *((float *)this + 10);
  v31.top = v10;
  v12 = v29.m12 * *((float *)this + 11);
  v31.right = v11;
  v31.bottom = v12;
  v14 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 112),
          v13,
          &v31,
          (CNineGridDrawListBrush *)((char *)this + 96),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 80),
          v28);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x62u, 0LL);
  }
  else if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v32 = v35;
    v33 = v35;
    v34 = &v36;
    CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
      v17,
      &v32);
    if ( (v33 - (_BYTE *)v32) >> 4 )
    {
      v18 = *v32;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v18;
    }
    v19 = *(_OWORD *)&v29.m[1][0];
    *((_BYTE *)this + 52) = 1;
    v20 = v30;
    *(_OWORD *)v2 = v19;
    v21 = v31;
    *((_QWORD *)v2 + 2) = v20;
    *((struct D2D_RECT_F *)this + 2) = v21;
    if ( *((_BYTE *)this + 64) )
    {
      v26 = m12 * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v26;
    }
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(&v32);
    v22 = v32;
    v23 = v32 == (_OWORD *)v35;
    v32 = 0LL;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
  }
  return v16;
}
