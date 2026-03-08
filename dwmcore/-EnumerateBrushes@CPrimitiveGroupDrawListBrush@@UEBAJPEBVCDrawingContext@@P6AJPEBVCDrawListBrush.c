/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800108C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800107E0 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180010C5C (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007FA38 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800925F4 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800B2BDC (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B4BA4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z @ 0x1800D9524 (-ClipRectAndEdgeFlags@@YA-AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18024F7EC (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v5; // r14d
  CMILMatrix *v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rsi
  D2DMatrixHelper *v10; // rbx
  __int64 v11; // r13
  float v12; // r12d
  __m128i v13; // xmm6
  struct D2D_MATRIX_3X2_F *v14; // r9
  char v15; // r11
  __int32 v16; // xmm1_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm0_4
  unsigned int v19; // xmm1_4
  CSurfaceDrawListBrush *v20; // rcx
  CSurfaceDrawListBrush *v21; // rax
  CSurfaceDrawListBrush *v22; // rax
  CSurfaceDrawListBrush *v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  float v27; // xmm3_4
  float v28; // xmm2_4
  FLOAT v29; // xmm0_4
  FLOAT v30; // xmm2_4
  FLOAT v31; // xmm1_4
  FLOAT v32; // xmm3_4
  bool v33; // [rsp+39h] [rbp-CFh]
  CSurfaceDrawListBrush *v34; // [rsp+40h] [rbp-C8h] BYREF
  float v35; // [rsp+48h] [rbp-C0h] BYREF
  float v36[2]; // [rsp+58h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush **v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-98h]
  unsigned int v40; // [rsp+74h] [rbp-94h]
  __m256i v41; // [rsp+78h] [rbp-90h] BYREF
  __int128 v42; // [rsp+98h] [rbp-70h]
  __int128 v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B8h] [rbp-50h]
  struct D2D_RECT_F v45; // [rsp+C0h] [rbp-48h] BYREF
  void *v46; // [rsp+D0h] [rbp-38h]
  int (*v47)(const struct CDrawListBrush *, void *); // [rsp+D8h] [rbp-30h]
  struct D2D_RECT_F v48; // [rsp+E0h] [rbp-28h] BYREF
  __m256i v49; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v50; // [rsp+118h] [rbp+10h]
  __int128 v51; // [rsp+128h] [rbp+20h]
  int v52; // [rsp+138h] [rbp+30h]
  _BYTE v53[8]; // [rsp+148h] [rbp+40h] BYREF
  D2DMatrixHelper *v54; // [rsp+150h] [rbp+48h]
  _BYTE v55[72]; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_RECT_F v56; // [rsp+1B0h] [rbp+A8h] BYREF

  v46 = a4;
  v47 = a3;
  v5 = 0;
  v52 = 0;
  CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)&v49);
  v6 = CMILMatrix::CMILMatrix((CMILMatrix *)v55, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
  v41 = *(__m256i *)v6;
  v42 = *((_OWORD *)v6 + 2);
  v43 = *((_OWORD *)v6 + 3);
  v44 = *((_DWORD *)v6 + 16);
  CMILMatrix::Multiply((CMILMatrix *)&v41, (const struct CMILMatrix *)&v49);
  v52 = v44;
  v49 = v41;
  v50 = v42;
  v51 = v43;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v49, v36, &v35);
  v7 = 0;
  v8 = *((_QWORD *)this + 9);
  v33 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v36[0] - 1.0) & _xmm) < 0.000081380211;
  if ( !*(_DWORD *)(*(_QWORD *)(v8 + 16) + 8LL) )
    return v5;
  while ( 1 )
  {
    v9 = **(_QWORD **)(v8 + 16) + 144LL * v7;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v8, (__int64)v53, v7);
    if ( (*(_BYTE *)(v9 + 4) & 2) == 0
      && *(_DWORD *)v9
      && *(_DWORD *)(v9 + 40) < *(_DWORD *)(*((_QWORD *)this + 9) + 32LL) )
    {
      break;
    }
LABEL_21:
    v8 = *((_QWORD *)this + 9);
    if ( ++v7 >= *(_DWORD *)(*(_QWORD *)(v8 + 16) + 8LL) )
      return v5;
  }
  while ( 1 )
  {
    v10 = v54;
    v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) + 24LL * *(unsigned int *)(v9 + 40);
    if ( *((_BYTE *)this + 52) )
    {
      ClipRectAndEdgeFlags(v54, *((unsigned int *)v54 + 11), (char *)this + 32, *((unsigned int *)this + 12), &v48, v36);
      v12 = v36[0];
      v13 = (__m128i)v48;
    }
    else
    {
      v13 = _mm_loadu_si128((const __m128i *)v54);
      v12 = *((float *)v54 + 11);
      v36[0] = v12;
      v48 = (struct D2D_RECT_F)v13;
    }
    if ( IsEmpty(&v48) )
      goto LABEL_20;
    if ( v33 )
    {
      if ( v15 )
      {
        v16 = *((_DWORD *)v10 + 17);
        v41.m256i_i32[0] = *((_DWORD *)v10 + 16);
        v17 = *((_DWORD *)v10 + 18);
        v41.m256i_i32[1] = v16;
        *(__int64 *)((char *)&v41.m256i_i64[1] + 4) = __PAIR64__(*((_DWORD *)v10 + 19), v17);
        v18 = *((_DWORD *)v10 + 20);
        v19 = *((_DWORD *)v10 + 21);
        goto LABEL_11;
      }
LABEL_26:
      v27 = FLOAT_N0_5;
      goto LABEL_27;
    }
    if ( !v15 )
      goto LABEL_26;
    v27 = 0.0;
LABEL_27:
    v28 = v33 ? 0.0 : FLOAT_N0_5;
    v29 = *(float *)v10 - v28;
    v30 = v28 + *((float *)v10 + 2);
    v31 = *((float *)v10 + 1) - v27;
    v32 = v27 + *((float *)v10 + 3);
    v45.left = v29;
    v45.right = v30;
    v45.top = v31;
    v45.bottom = v32;
    D2DMatrixHelper::ComputeRectangleTransform(v10, &v45, &v56, v14);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v37,
      (const struct D2D1::Matrix3x2F *)&v56,
      (D2DMatrixHelper *)((char *)v10 + 64));
    *(__int64 *)((char *)&v41.m256i_i64[1] + 4) = v38;
    v18 = v39;
    v19 = v40;
    v41.m256i_i64[0] = (__int64)v37;
LABEL_11:
    v41.m256i_i32[2] = 0;
    v41.m256i_i32[5] = 0;
    v34 = 0LL;
    v38 = 0LL;
    v37 = &v34;
    LOWORD(v35) = *((_WORD *)this + 40);
    BYTE2(v35) = *((_BYTE *)this + 82);
    v41.m256i_i64[3] = __PAIR64__(v19, v18);
    LODWORD(v42) = 1065353216;
    LOBYTE(v39) = 1;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v11, &v35, &v41, &v38);
    if ( (_BYTE)v39 )
    {
      v20 = *v37;
      *v37 = (CSurfaceDrawListBrush *)v38;
      if ( v20 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1u);
    }
    if ( (v5 & 0x80000000) != 0 )
      break;
    *((_BYTE *)v34 + 147) = 1;
    v21 = v34;
    *(_OWORD *)((char *)v34 + 120) = *(_OWORD *)((char *)v10 + 88);
    *((_BYTE *)v21 + 145) = 0;
    v22 = v34;
    *(_OWORD *)((char *)v34 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v22 + 3) = *((_QWORD *)this + 3);
    v23 = v34;
    *((_BYTE *)v34 + 52) = 1;
    *((__m128i *)v23 + 2) = v13;
    *((float *)v23 + 12) = v12;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v34, (const struct D2D_VECTOR_2F *)this + 7);
    v24 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v47)(v34, v46);
    v5 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xAAu, 0LL);
      goto LABEL_33;
    }
    if ( v34 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1u);
LABEL_20:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v53) )
      goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v5, 0x9Eu, 0LL);
LABEL_33:
  if ( v34 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1u);
  return v5;
}
