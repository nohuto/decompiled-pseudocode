__int64 __fastcall CVisualSurfaceRenderStrategy::GetBrushParameters(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct D2D_SIZE_F *a3)
{
  CVisualSurface *v3; // rbx
  int v5; // r13d
  char v7; // r12
  char v8; // r15
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  CMatrixStack *v12; // rcx
  int v13; // r10d
  struct D2D_SIZE_F v14; // rax
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rax
  float v19; // xmm0_4
  CCachedVisualImage *v20; // rbx
  struct IBitmapResource *v21; // rdx
  int BrushParametersWorker; // eax
  unsigned int v23; // ecx
  struct D2D_SIZE_F v25; // rax
  int CVIForRealizationSize; // eax
  unsigned int v27; // ecx
  CMatrixStack *v28; // rcx
  int v29; // r10d
  char v30; // [rsp+38h] [rbp-D0h]
  struct D2D_VECTOR_2F v31; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v32; // [rsp+48h] [rbp-C0h] BYREF
  struct CCachedVisualImage *v33; // [rsp+60h] [rbp-A8h]
  __int128 v34; // [rsp+68h] [rbp-A0h]
  struct CCachedVisualImage *v35[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v36; // [rsp+98h] [rbp-70h] BYREF
  struct CCachedVisualImage *v37; // [rsp+A8h] [rbp-60h]
  __int128 v38; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-40h]
  __int128 v40; // [rsp+D8h] [rbp-30h]
  __int128 v41; // [rsp+E8h] [rbp-20h]
  int v42; // [rsp+F8h] [rbp-10h]
  __int128 v43; // [rsp+108h] [rbp+0h] BYREF
  __int128 v44; // [rsp+118h] [rbp+10h]
  __int128 v45; // [rsp+128h] [rbp+20h]
  __int128 v46; // [rsp+138h] [rbp+30h]
  int v47; // [rsp+148h] [rbp+40h]
  _BYTE v48[64]; // [rsp+158h] [rbp+50h] BYREF
  int v49; // [rsp+198h] [rbp+90h]
  __int128 v50; // [rsp+1A8h] [rbp+A0h] BYREF
  int v51; // [rsp+1B8h] [rbp+B0h]
  int v52; // [rsp+1BCh] [rbp+B4h]

  v3 = (CVisualSurface *)*((_QWORD *)a2 + 13);
  v5 = *((_DWORD *)a2 + 25);
  v35[0] = 0LL;
  v7 = *((_BYTE *)v3 + 200);
  v8 = 0;
  v9 = CSurfaceBrush::ComputeLayout(a2, a3 + 1, (struct CContent::LayoutData *)v32.m[1], 0LL);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4C0u, 0LL);
    goto LABEL_12;
  }
  if ( v7 )
  {
    if ( *((_BYTE *)a2 + 169) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)&v43, (struct D2D_MATRIX_3X2_F *)v32.m[1]);
      v28 = (CMatrixStack *)(*(_QWORD *)a3 + 400LL);
      v49 = v29;
      v50 = v34;
      CMatrixStack::Top(v28, (struct CMILMatrix *)v48);
      v38 = v43;
      v39 = v44;
      v40 = v45;
      v41 = v46;
      v42 = v47;
      CMILMatrix::Multiply((CMILMatrix *)&v38, (const struct CMILMatrix *)v48);
      v32.m11 = 1.0;
      if ( (unsigned __int8)CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v38, &v32.m12, &v32.m11)
        && (v32.m12 < 1.0 || v32.m11 < 1.0) )
      {
        v5 = 3;
      }
      v8 = 1;
    }
    v25 = *a3;
    v31.x = 0.0;
    v31.y = 0.0;
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              v3,
                              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v25 + 40LL) + 928LL),
                              &v31,
                              &v31,
                              v35);
    v11 = CVIForRealizationSize;
    if ( CVIForRealizationSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, CVIForRealizationSize, 0x4E1u, 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)&v43, (struct D2D_MATRIX_3X2_F *)v32.m[1]);
    v12 = (CMatrixStack *)(*(_QWORD *)a3 + 400LL);
    v49 = v13;
    CMatrixStack::Top(v12, (struct CMILMatrix *)v48);
    v38 = v43;
    v39 = v44;
    v40 = v45;
    v41 = v46;
    v42 = v47;
    CMILMatrix::Multiply((CMILMatrix *)&v38, (const struct CMILMatrix *)v48);
    v50 = v34;
    CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v38, &v32.m12, &v32.m11);
    v30 = *((_BYTE *)v3 + 200);
    *(_QWORD *)&v50 = v30 != 0 ? 96LL : 88LL;
    v14 = *a3;
    v31 = *(struct D2D_VECTOR_2F *)((char *)v3 + v50);
    v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 40LL) + 928LL);
    v31.x = v31.x * v32.m12;
    v31.y = v31.y * v32.m11;
    v16 = CVisualSurface::GetCVIForRealizationSize(v3, v15, &v31, &v31, v35);
    v11 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x517u, 0LL);
      goto LABEL_12;
    }
    v18 = v50;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)((char *)&v50 + 4) = 0LL;
    *(_OWORD *)&v35[1] = *(_OWORD *)&v32.m[1][0];
    v35[3] = v33;
    v19 = *(float *)((char *)v3 + v18);
    v51 = 0;
    v52 = 0;
    *((struct D2D_VECTOR_2F *)&v34 + 1) = v31;
    *(float *)&v50 = v19 / v31.x;
    *((float *)&v50 + 3) = *(float *)((char *)v3 + (v30 != 0 ? 8 : 0) + 92) / v31.y;
    MILMatrix3x2::SetProduct(
      (MILMatrix3x2 *)&v36,
      (const struct MILMatrix3x2 *)&v50,
      (const struct MILMatrix3x2 *)&v35[1]);
    *(_OWORD *)&v32.m[1][0] = v36;
    v33 = v37;
  }
  v20 = v35[0];
  if ( v35[0] )
    v21 = (struct CCachedVisualImage *)((char *)v35[0] + *(int *)(*((_QWORD *)v35[0] + 8) + 8LL) + 64);
  else
    v21 = 0LL;
  BrushParametersWorker = CBitmapResourceRenderStrategy::GetBrushParametersWorker(
                            a2,
                            v21,
                            (struct CContent::LayoutData *)v32.m[1],
                            v5,
                            (struct CBrushDrawListGenerator *)a3);
  v11 = BrushParametersWorker;
  if ( BrushParametersWorker < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, BrushParametersWorker, 0x539u, 0LL);
  }
  else if ( LODWORD(a3[9].width) )
  {
    if ( CCachedVisualImage::IsSameVisualTree(v20, *(const struct CVisualTree **)(*(_QWORD *)a3 + 8056LL)) )
    {
      LODWORD(a3[2].width) |= 0x100u;
    }
    else if ( !v7 || v8 )
    {
      LODWORD(a3[2].width) |= 0x40u;
    }
  }
LABEL_12:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v35);
  return v11;
}
