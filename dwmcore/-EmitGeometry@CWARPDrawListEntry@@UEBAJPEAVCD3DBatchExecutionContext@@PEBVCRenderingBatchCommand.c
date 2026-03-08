/*
 * XREFs of ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801FCC70
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800B3D30 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D45A4 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1801D2DB8 (-IsCloseRealOneMatrixEpsilon@@YA_NM@Z.c)
 *     ApplyEdgeFlags @ 0x1801FCAE8 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801FCB54 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801FD18C (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 *     ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1801FD208 (-InterpolationModeToWarpFilterMode2@@YA-AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@.c)
 *     ?IsValid@CDrawListBitmap@@QEBA_NXZ @ 0x1801FD218 (-IsValid@CDrawListBitmap@@QEBA_NXZ.c)
 */

__int64 __fastcall CWARPDrawListEntry::EmitGeometry(
        __m128 *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CRenderingBatchCommand *a3)
{
  unsigned int v3; // xmm0_4
  float v4; // xmm8_4
  const struct CRenderingBatchCommand *v5; // r14
  FLOAT v6; // xmm5_4
  struct CD3DBatchExecutionContext *v7; // rdi
  unsigned int v8; // xmm1_4
  __m128 *v9; // r15
  float v10; // xmm7_4
  float v11; // xmm6_4
  int v12; // xmm4_4
  int v13; // xmm5_4
  float v14; // xmm5_4
  __int64 v15; // rcx
  struct D2D_RECT_F *v16; // r9
  int v17; // xmm4_4
  const struct D2D_MATRIX_3X2_F *v18; // r8
  int v19; // ecx
  D2DMatrixHelper *v20; // rcx
  int v21; // eax
  __m128 v22; // xmm3
  __int64 v23; // rcx
  __int64 IsValid; // rbx
  __int64 v25; // rax
  __m128 *v26; // rcx
  unsigned int v27; // r13d
  __m128 *v28; // r15
  struct D2D_RECT_F *p_right; // r11
  char *v30; // rdi
  char *v31; // r14
  char *v32; // r12
  __m128 *v33; // rsi
  int v34; // xmm1_4
  int v35; // xmm2_4
  int v36; // eax
  __m128 *v37; // r9
  _BYTE *v38; // r10
  struct D2D_RECT_F *v39; // r11
  int v40; // eax
  __m128 v41; // xmm0
  int v42; // edx
  int v43; // eax
  unsigned int v44; // edx
  unsigned int v45; // ebx
  int v46; // ecx
  int v47; // eax
  __int64 v48; // rcx
  __m128 *v50; // [rsp+38h] [rbp-D0h]
  _BYTE *v51; // [rsp+58h] [rbp-B0h]
  struct D2D_RECT_F *v52; // [rsp+60h] [rbp-A8h]
  _QWORD v53[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v54; // [rsp+80h] [rbp-88h]
  int v55; // [rsp+84h] [rbp-84h]
  const struct CRenderingBatchCommand *v56; // [rsp+88h] [rbp-80h]
  CWARPDrawListEntry *v57; // [rsp+90h] [rbp-78h]
  struct CD3DBatchExecutionContext *v58; // [rsp+98h] [rbp-70h]
  int v59; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE *v60; // [rsp+B0h] [rbp-58h]
  int v61; // [rsp+B8h] [rbp-50h]
  int v62; // [rsp+BCh] [rbp-4Ch]
  unsigned int v63; // [rsp+C0h] [rbp-48h]
  _BYTE *v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-38h]
  char *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  char v68[4]; // [rsp+E8h] [rbp-20h] BYREF
  char v69; // [rsp+ECh] [rbp-1Ch] BYREF
  struct D2D_RECT_F v70; // [rsp+168h] [rbp+60h] BYREF
  unsigned __int64 v71; // [rsp+178h] [rbp+70h]
  _BYTE v72[32]; // [rsp+180h] [rbp+78h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v74[32]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v75; // [rsp+1D8h] [rbp+D0h] BYREF
  char v76; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = *((_DWORD *)a3 + 16);
  v4 = *((float *)a3 + 4);
  v5 = a3;
  v6 = *((float *)a3 + 5);
  v7 = a2;
  v8 = *((_DWORD *)a3 + 17);
  v9 = this;
  v10 = *((float *)a3 + 8);
  v11 = *((float *)a3 + 9);
  v61 = 0;
  v71 = __PAIR64__(v8, v3);
  v70.left = v4;
  v70.top = v6;
  v70.right = v10;
  v70.bottom = v11;
  v56 = a3;
  v58 = a2;
  v57 = (CWARPDrawListEntry *)this;
  v59 = 26;
  v65 = 0LL;
  v67 = 0LL;
  if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(LODWORD(v4) & _xmm)) )
  {
    v70.left = 1.0;
    if ( v4 <= 0.0 )
      v70.left = -1.0;
    v70.top = 0.0;
  }
  else if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(v13 & v12)) )
  {
    v70.left = 0.0;
    v70.top = 1.0;
    if ( v14 <= 0.0 )
      v70.top = -1.0;
  }
  if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(LODWORD(v11) & v12)) )
  {
    v70.right = 0.0;
    if ( v11 <= 0.0 )
      v70.bottom = -1.0;
    else
      v70.bottom = 1.0;
  }
  else if ( IsCloseRealOneMatrixEpsilon(COERCE_FLOAT(LODWORD(v10) & v17)) )
  {
    v70.right = 1.0;
    if ( v10 <= 0.0 )
      v70.right = -1.0;
    v70.bottom = 0.0;
  }
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)(v15 + 8),
    &v70,
    (const struct D2D_MATRIX_3X2_F *)v72,
    v16);
  v19 = v9[1].m128_i32[3] & 3;
  v60 = &v72[16];
  v19 <<= 6;
  v63 = v19 | 0xF00;
  *(_OWORD *)&v72[16] = *(_OWORD *)v72;
  if ( v19 )
  {
    v20 = (D2DMatrixHelper *)v9[1].m128_u32[2];
    if ( (_DWORD)v20 != 50529027 )
    {
      v21 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(v20, &v70.left, v18);
      ApplyEdgeFlags((float *)&v72[16], v21);
    }
  }
  *(struct D2D_RECT_F *)&matrix.m11 = v70;
  *(_QWORD *)&matrix.m[2][0] = v71;
  D2D1InvertMatrix(&matrix);
  `vector constructor iterator'(v68, 64LL, 2LL, (void (__fastcall *)(char *))WarpTextureState::WarpTextureState);
  v22 = _mm_mul_ps(v9[2], _mm_shuffle_ps((__m128)*((unsigned int *)v5 + 22), (__m128)*((unsigned int *)v5 + 22), 0));
  v50 = v9 + 3;
  *(_DWORD *)v72 = v22.m128_i32[0];
  *(_DWORD *)&v72[12] = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
  *(_DWORD *)&v72[4] = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
  *(_DWORD *)&v72[8] = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
  IsValid = CDrawListBitmap::IsValid((CDrawListBitmap *)&v9[3]);
  v25 = *(_QWORD *)&v70.left;
  if ( (_BYTE)IsValid )
    v25 = v23;
  *(_QWORD *)&v70.left = v25;
  if ( CDrawListBitmap::IsValid((CDrawListBitmap *)&v9[8]) )
  {
    *((_QWORD *)&v70.left + IsValid) = v26;
    LODWORD(IsValid) = IsValid + 1;
  }
  v27 = 0;
  if ( (_DWORD)IsValid )
  {
    v28 = v26;
    p_right = &v70;
    v53[0] = v74;
    v52 = &v70;
    v51 = v74;
    v30 = &v69;
    v31 = &v75;
    v32 = &v76;
    do
    {
      v33 = *(__m128 **)&p_right->left;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v53[1],
        (const struct D2D1::Matrix3x2F *)&matrix,
        (const struct D2D1::Matrix3x2F *)(*(_QWORD *)&p_right->left + 24LL));
      v34 = v54;
      v35 = v55;
      *(_OWORD *)(v32 - 8) = *(_OWORD *)&v53[1];
      *((_DWORD *)v32 + 2) = v34;
      *((_DWORD *)v32 + 3) = v35;
      *(_DWORD *)v30 = 0;
      *((_DWORD *)v30 - 1) = v27;
      *(_QWORD *)(v30 + 4) = v31;
      *((_DWORD *)v30 + 12) = ExtendModeToWarpAddressMode(&v33[4]);
      *((_DWORD *)v30 + 13) = ExtendModeToWarpAddressMode(&v33[4].m128_i16[2]);
      v36 = InterpolationModeToWarpFilterMode2(&v33[4].m128_u16[4]);
      *((_DWORD *)v30 + 8) = 0;
      *((_DWORD *)v30 + 11) = v36;
      *((_DWORD *)v30 + 9) = v33 == v50;
      *((_DWORD *)v30 + 10) = v33 == v28;
      if ( v33 == v50 )
      {
        if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v33) )
        {
          if ( *(float *)&v72[12] == 1.0 )
            v40 = 1;
          else
            v40 = 3;
        }
        else
        {
          v40 = 2;
        }
        v37 = (__m128 *)v53[0];
        v38 = v51;
        v39 = v52;
        *((_DWORD *)v30 + 7) = v40;
      }
      else if ( v33 == v28 )
      {
        *((_DWORD *)v30 + 7) = 4;
      }
      if ( v33[4].m128_i8[12] )
      {
        v41 = v33[3];
        *(_QWORD *)(v30 + 20) = v38;
        *v37 = v41;
      }
      p_right = (struct D2D_RECT_F *)&v39->right;
      v51 = v38 + 16;
      ++v27;
      v52 = p_right;
      v31 += 24;
      v53[0] = v37 + 1;
      v32 += 24;
      v30 += 64;
    }
    while ( v27 < (unsigned int)IsValid );
    v5 = v56;
    v9 = (__m128 *)v57;
    v7 = v58;
  }
  v42 = *((_DWORD *)v5 + 21);
  v64 = v72;
  v66 = v68;
  v43 = BlendModeToWarpBlendMode(v42);
  v45 = v63 & 0xFFFFFFC3 | (4 * (IsValid | 0x3C0));
  v62 = v43;
  v63 = v45;
  if ( v44 <= 0x14 && (v46 = 1179728, _bittest(&v46, v44)) )
  {
    if ( !v9[13].m128_i8[0] )
      v63 = v45 & 0xFFFFF7FF;
  }
  else if ( v44 == 22 )
  {
    v63 = v45 & 0xFFFFF7FF;
    goto LABEL_47;
  }
  if ( !v44 && (v9[-1].m128_i8[0] & 1) != 0 )
  {
    if ( *((float *)v5 + 22) >= 0.99999988 )
      v43 = 0;
    v62 = v43;
  }
LABEL_47:
  v47 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v7 + 3) + 24LL))(*((_QWORD *)v7 + 3), &v59);
  if ( v47 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x189u, 0LL);
  ++dword_1803E2AF8;
  return 0LL;
}
