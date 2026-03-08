/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007CF6C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18008D534 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18009280C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180092E30 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800946C0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800B3950 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800B3D30 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800B3D8C (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800B3DC0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4B20 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800B520C (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B52D4 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B5850 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800B5884 (--0CCpuClip@@QEAA@XZ.c)
 *     ??$?4VCCommonRenderingEffect@@@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCommonRenderingEffect@@@Z @ 0x1800B58C0 (--$-4VCCommonRenderingEffect@@@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCComm.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v5; // r12
  unsigned int v6; // r14d
  bool v8; // zf
  __int64 v9; // rdx
  struct IBitmapResource *v10; // rdx
  char v11; // r14
  struct D2D_SIZE_U v12; // rdi
  struct CCommonRenderingEffect *v13; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v15; // r10
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // r9
  struct CRenderingEffect *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  int v23; // esi
  __int64 v24; // rcx
  __m128 v25; // xmm7
  unsigned __int64 v26; // r12
  __m128 v27; // xmm7
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned int v30; // xmm9_4
  unsigned int v31; // xmm10_4
  unsigned int v32; // xmm11_4
  unsigned int v33; // xmm12_4
  int v34; // eax
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v40; // rsi
  __int64 (__fastcall *v41)(__int64, __int64 *); // rdi
  __int64 (__fastcall ***v42)(_QWORD, _QWORD **); // rcx
  int v43; // ebx
  __int64 v44; // rax
  char v45; // cl
  int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // r9
  char IsOpaque; // [rsp+30h] [rbp-D0h]
  __int16 v50; // [rsp+40h] [rbp-C0h] BYREF
  char v51; // [rsp+42h] [rbp-BEh]
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  __m128 v53; // [rsp+60h] [rbp-A0h] BYREF
  struct CRenderingEffect *v54; // [rsp+78h] [rbp-88h] BYREF
  __int128 v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int128 v57; // [rsp+98h] [rbp-68h] BYREF
  __int128 v58; // [rsp+A8h] [rbp-58h]
  _QWORD *v59; // [rsp+B8h] [rbp-48h]
  __int128 v60; // [rsp+C0h] [rbp-40h]
  float v61[6]; // [rsp+D0h] [rbp-30h] BYREF
  struct D2D_SIZE_U v62; // [rsp+E8h] [rbp-18h]
  CDrawListCache *v63; // [rsp+F0h] [rbp-10h]
  __int128 v64; // [rsp+F8h] [rbp-8h] BYREF
  int v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+10Ch] [rbp+Ch]
  int v67; // [rsp+114h] [rbp+14h]
  _BYTE v68[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v69[80]; // [rsp+130h] [rbp+30h] BYREF
  char v70[48]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD *v71; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v72; // [rsp+1C0h] [rbp+C0h]
  _DWORD v73[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v74; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v75[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v76; // [rsp+210h] [rbp+110h]
  __int64 v77; // [rsp+218h] [rbp+118h]
  __int64 *v78; // [rsp+220h] [rbp+120h]
  int v79; // [rsp+230h] [rbp+130h]
  _BYTE v80[4480]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v81; // [rsp+13C0h] [rbp+12C0h] BYREF
  int v82; // [rsp+13C8h] [rbp+12C8h]
  __int64 v83; // [rsp+13CCh] [rbp+12CCh]
  int v84; // [rsp+13D4h] [rbp+12D4h]
  __int64 v85; // [rsp+13D8h] [rbp+12D8h]
  int v86; // [rsp+13E0h] [rbp+12E0h]
  __int128 v87; // [rsp+13E4h] [rbp+12E4h]

  v63 = a4;
  LODWORD(v52) = 0;
  v5 = 0;
  v6 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v80);
  v54 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  CCpuClip::CCpuClip((CCpuClip *)v69);
  if ( !*((_QWORD *)this + 9) )
    goto LABEL_27;
  if ( CDrawingContext::IsWarpFastPathEnabled(a2) && *((_DWORD *)a2 + 85) != 4 )
  {
    v40 = *((_QWORD *)a2 + 4) + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL);
    v41 = **(__int64 (__fastcall ***)(__int64, __int64 *))(v40 + 8);
    v42 = (__int64 (__fastcall ***)(_QWORD, _QWORD **))(*((_QWORD *)this + 9)
                                                      + 64LL
                                                      + *(int *)(*(_QWORD *)(*((_QWORD *)this + 9) + 64LL) + 8LL));
    v43 = *(_DWORD *)((**v42)(v42, &v71) + 8);
    v44 = v41(v40 + 8, &v74);
    v45 = BYTE12(v58);
    if ( *(_DWORD *)(v44 + 8) == v43 )
      v45 = 1;
    BYTE12(v58) = v45;
  }
  v8 = *((_DWORD *)a2 + 84) == 0;
  LODWORD(v57) = 2;
  v79 = 0;
  HIDWORD(v57) = !v8;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v75);
  CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v75, (float *)&v57 + 1, (float *)&v57 + 2, 0LL);
  CDrawingContext::GetCpuClip(a2, (struct CCpuClip *)v69);
  v9 = *((_QWORD *)this + 9);
  *(_QWORD *)&v58 = v69;
  if ( v9 )
    v10 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v9 + 64) + 8LL) + v9 + 64);
  else
    v10 = 0LL;
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v53, v10);
  if ( !v53.m128_u64[1] )
  {
LABEL_36:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v53.m128_i64[1]);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v53);
    goto LABEL_27;
  }
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)&v53);
  v11 = IsOpaque;
  v12 = **(struct D2D_SIZE_U **)&CDrawListBitmap::GetSize((CDrawListBitmap *)&v53);
  v62 = v12;
  ObjectCache = CThreadContext::GetObjectCache(v13);
  v15 = 0LL;
  v16 = *((_DWORD *)ObjectCache + 1);
  if ( v16 )
  {
    v15 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v15;
    *((_DWORD *)ObjectCache + 1) = v16 - 1;
  }
  if ( v15 || (v15 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v50 = SamplerMode::k_ClampClampLinear;
    v56 = 0LL;
    v51 = 1;
    LOWORD(v52) = SamplerMode::k_ClampClampLinear;
    BYTE2(v52) = 1;
    v55 = 0LL;
    v17 = CCommonRenderingEffect::CCommonRenderingEffect(
            (__int64)v15,
            (__int64)&v53,
            (__int64)&v52,
            &v55,
            (__int64)&v50);
    v5 = 1;
  }
  else
  {
    v17 = 0LL;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::operator=<CCommonRenderingEffect>(&v54, v17);
  if ( (v5 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55);
  }
  v20 = v54;
  if ( !v54 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x7Du, 0LL);
    goto LABEL_36;
  }
  CDrawListEntryBuilder::Begin(
    (CDrawListEntryBuilder *)v80,
    (const struct DrawListEntryBuilderSetupParams *)&v57,
    v54,
    v19);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v53.m128_i64[1]);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v53);
  v21 = (_QWORD *)*((_QWORD *)this + 10);
  v22 = (_QWORD *)*((_QWORD *)this + 11);
  v59 = v21;
  v71 = v22;
  if ( v21 == v22 )
  {
LABEL_25:
    v37 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v80);
    v6 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xC1u, 0LL);
    else
      CDrawListCache::Update(v63, a2, (struct CDrawListEntryBuilder *)v80);
  }
  else
  {
    v23 = DWORD2(v58);
    while ( 1 )
    {
      v24 = *v21;
      v74 = v24;
      v25 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v24 + 68));
      v26 = (__int64)(*(_QWORD *)(v24 + 104) - *(_QWORD *)(v24 + 96)) >> 4;
      if ( (__int64)(*(_QWORD *)(v24 + 80) - *(_QWORD *)(v24 + 72)) >> 4 < v26 )
        v26 = (__int64)(*(_QWORD *)(v24 + 80) - *(_QWORD *)(v24 + 72)) >> 4;
      v52 = 0LL;
      v25.m128_f32[0] = v25.m128_f32[0] / 255.0;
      v27 = _mm_shuffle_ps(v25, v25, 0);
      if ( v26 )
        break;
LABEL_24:
      v21 = v59 + 1;
      v59 = v21;
      if ( v21 == v71 )
        goto LABEL_25;
    }
    v28 = 0LL;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v24 + 96);
      v72 = *(_OWORD *)(v28 + *(_QWORD *)(v24 + 72));
      v30 = *(_DWORD *)(v28 + v29);
      v31 = *(_DWORD *)(v28 + v29 + 4);
      v32 = *(_DWORD *)(v28 + v29 + 8);
      v33 = *(_DWORD *)(v28 + v29 + 12);
      v34 = v23;
      v73[0] = v30;
      v73[1] = v31;
      v73[2] = v32;
      v73[3] = v33;
      if ( v11 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v27.m128_f32[0] - 1.0) & _xmm) < 0.0000011920929 )
        v23 |= 1u;
      else
        v23 &= ~1u;
      DWORD2(v58) = v23;
      if ( v34 != v23 )
      {
        v46 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v80);
        v6 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x99u, 0LL);
          goto LABEL_27;
        }
        CDrawListEntryBuilder::Begin(
          (CDrawListEntryBuilder *)v80,
          (const struct DrawListEntryBuilderSetupParams *)&v57,
          v20,
          v48);
      }
      v66 = 0x600000000LL;
      v67 = 0;
      v65 = 0;
      *(_QWORD *)&v60 = __PAIR64__(v31, v30);
      *((_QWORD *)&v60 + 1) = __PAIR64__(v33, v32);
      v64 = v60;
      memset_0(&v81, 0, 0x68uLL);
      v87 = _xmm;
      MILMatrix3x2::InferAffineMatrix(v68, v73);
      v61[1] = 0.0;
      v61[2] = 0.0;
      v61[4] = 0.0;
      v61[5] = 0.0;
      v61[0] = 1.0 / (float)(int)v12.width;
      v61[3] = 1.0 / (float)(int)v62.height;
      MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v55, (const struct MILMatrix3x2 *)v68, (const struct MILMatrix3x2 *)v61);
      v82 = 0;
      v84 = 0;
      v76 = 0LL;
      v83 = *((_QWORD *)&v55 + 1);
      v85 = v56;
      v75[1] = 0LL;
      v86 = 1065353216;
      v81 = v55;
      v53 = v27;
      v77 = 2LL;
      v75[0] = v27;
      v78 = &v81;
      v35 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v80,
              (const struct PrimitiveGeometryDesc *)&v64,
              (const struct PrimitiveVertexAttributesDesc *)v75,
              0LL);
      v6 = v35;
      if ( v35 < 0 )
        break;
      v28 += 16LL;
      v24 = v74;
      v11 = IsOpaque;
      if ( ++v52 >= v26 )
        goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xBDu, 0LL);
  }
LABEL_27:
  CShapePtr::Release((CShapePtr *)v70);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v54);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v80);
  return v6;
}
