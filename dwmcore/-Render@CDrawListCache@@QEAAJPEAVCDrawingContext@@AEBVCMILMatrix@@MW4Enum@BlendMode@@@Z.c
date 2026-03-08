/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180079180
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180078C48 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800FB294 (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18001303C (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C268 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005F090 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180074400 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800748A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18007E934 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800922D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801AF88C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801AF8D0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1801D2E10 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, CMILMatrix *a3, float a4)
{
  float v4; // xmm2_4
  __int64 v5; // rsi
  __int64 v6; // rax
  float v8; // xmm3_4
  unsigned int v11; // r12d
  struct ID2D1Geometry *v12; // r15
  bool v13; // zf
  CDrawingContext *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // edx
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // r13
  __int64 v23; // r15
  CMILMatrix *v24; // rax
  _OWORD *v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  float v28; // xmm6_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v35; // xmm1_4
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  float v40; // xmm4_4
  float v41; // xmm3_4
  int v42; // eax
  __m128 v43; // xmm2
  int v44; // ecx
  __m128 v45; // xmm2
  __m128 v46; // rt1
  __int128 v47; // xmm2
  __int128 v48; // xmm0
  __int128 v49; // xmm2
  __int128 v50; // xmm0
  __m128i v51; // xmm6
  int v52; // eax
  unsigned int v53; // ecx
  struct ID2D1Geometry *v54; // rax
  int D2DGeometry; // eax
  unsigned int v56; // ecx
  int v57; // eax
  unsigned int v58; // ecx
  char v59; // [rsp+48h] [rbp-C0h]
  CMILMatrix *v60; // [rsp+50h] [rbp-B8h]
  float v61; // [rsp+50h] [rbp-B8h]
  float v62; // [rsp+50h] [rbp-B8h]
  CDrawingContext *v63; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v64; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v65[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+78h] [rbp-90h] BYREF
  CDrawingContext *v67; // [rsp+80h] [rbp-88h]
  CMILMatrix *v68; // [rsp+88h] [rbp-80h]
  struct ID2D1Geometry *v69; // [rsp+90h] [rbp-78h]
  __int64 v70; // [rsp+98h] [rbp-70h]
  _OWORD *v71; // [rsp+A0h] [rbp-68h]
  _OWORD v72[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v73; // [rsp+E8h] [rbp-20h]
  __int128 v74; // [rsp+F8h] [rbp-10h]
  __int128 v75; // [rsp+108h] [rbp+0h] BYREF
  __int64 v76; // [rsp+118h] [rbp+10h]
  __int128 v77; // [rsp+120h] [rbp+18h] BYREF
  void *retaddr; // [rsp+1F0h] [rbp+E8h]

  v4 = *(float *)(a1 + 64);
  v5 = 0LL;
  v6 = *((_QWORD *)a2 + 5);
  v8 = *(float *)(a1 + 72);
  v68 = a3;
  v67 = a2;
  v11 = 0;
  v70 = v6;
  v12 = 0LL;
  v69 = 0LL;
  v64 = 0LL;
  v59 = 0;
  if ( v8 <= v4 || *(float *)(a1 + 76) <= *(float *)(a1 + 68) || a4 <= 0.0 )
    goto LABEL_31;
  v13 = (*(_BYTE *)(a1 + 92) & 0x10) == 0;
  v14 = 0LL;
  v63 = 0LL;
  v73 = 0;
  if ( !v13 )
  {
    v15 = CDrawingContext::ApplyRenderStateInternal((__m128 *)a2, 1);
    v11 = v15;
    if ( v15 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xF1u, 0LL);
LABEL_47:
    CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v63);
    goto LABEL_35;
  }
  v35 = *(_DWORD *)(a1 + 76);
  DWORD1(v75) = *(_DWORD *)(a1 + 68);
  *(float *)&v75 = v4;
  *((_QWORD *)&v75 + 1) = __PAIR64__(v35, LODWORD(v8));
  v76 = 0LL;
  v36 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v63, a2, &v75, a3);
  v11 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xFAu, 0LL);
    goto LABEL_47;
  }
  v38 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a2 + 2) + 112LL))((_QWORD *)a2 + 2);
  v11 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xFCu, 0LL);
    goto LABEL_47;
  }
  v14 = v63;
LABEL_6:
  v17 = *(_QWORD *)(a1 + 48);
  v18 = a1 + 48;
  v19 = v17 & 3;
  if ( (v17 & 3) == 0 )
    goto LABEL_7;
  if ( v19 == 1 )
  {
    v20 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_11;
  }
  if ( v19 != 2 )
  {
    if ( v19 != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_7:
    v20 = a1 + 48;
    if ( (v17 & 3) == 0 )
    {
      v21 = 1LL;
      goto LABEL_12;
    }
    if ( v19 != 1 )
    {
      if ( v19 != 2 )
        goto LABEL_53;
      goto LABEL_52;
    }
LABEL_11:
    v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    v21 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_12;
  }
  v20 = 0LL;
LABEL_52:
  v18 = 0LL;
LABEL_53:
  v21 = 0LL;
LABEL_12:
  v22 = v18 + 8 * v21;
  while ( v20 != v22 )
  {
    v23 = *(_QWORD *)v20;
    if ( (*(_DWORD *)(*(_QWORD *)v20 + 48LL) & 0x400) != 0 && CMILMatrix::Is2DAxisAlignedPreserving(v68) )
    {
      v40 = (float)((float)(*(float *)(v23 + 44) * *((float *)v68 + 4)) + (float)(*(float *)(v23 + 40) * *(float *)v68))
          + *((float *)v68 + 12);
      v41 = (float)((float)(*(float *)(v23 + 40) * *((float *)v68 + 1))
                  + (float)(*(float *)(v23 + 44) * *((float *)v68 + 5)))
          + *((float *)v68 + 13);
      if ( COERCE_UNSIGNED_INT(fabs(v40)) > 0x497FFFF0 )
      {
        v43 = 0LL;
        v43.m128_f32[0] = (float)(int)v40 - v40;
        v42 = (int)v40 - _mm_cmple_ss(v43, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v61 = v40 + 6291456.25;
        v42 = (int)(LODWORD(v61) << 10) >> 11;
      }
      if ( COERCE_UNSIGNED_INT(
             fabs(
               (float)((float)(*(float *)(v23 + 40) * *((float *)v68 + 1))
                     + (float)(*(float *)(v23 + 44) * *((float *)v68 + 5)))
             + *((float *)v68 + 13))) > 0x497FFFF0 )
      {
        v45 = 0LL;
        v45.m128_f32[0] = (float)(int)v41 - v41;
        v46.m128_f32[0] = FLOAT_N0_5;
        v44 = (int)v41 - _mm_cmple_ss(v45, v46).m128_u32[0];
      }
      else
      {
        v62 = v41 + 6291456.25;
        v44 = (int)(LODWORD(v62) << 10) >> 11;
      }
      v47 = *((_OWORD *)v68 + 1);
      v48 = *(_OWORD *)v68;
      v73 = *((_DWORD *)v68 + 16);
      v72[1] = v47;
      v49 = *((_OWORD *)v68 + 3);
      v72[0] = v48;
      v50 = *((_OWORD *)v68 + 2);
      v72[3] = v49;
      v72[2] = v50;
      CMILMatrix::Translate((CMILMatrix *)v72, (float)v42 - v40, (float)v44 - v41, 0.0);
      v24 = (CMILMatrix *)v72;
    }
    else
    {
      v24 = v68;
    }
    v60 = v24;
    if ( (*(_DWORD *)(v23 + 48) & 0x1000) != 0 )
      goto LABEL_25;
    v25 = (_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
    v71 = v25;
    v26 = 0LL;
    v74 = 0LL;
    v27 = *(_DWORD *)(v70 + 368);
    if ( v27 )
      v26 = *(_QWORD *)(*(_QWORD *)(v70 + 344) + 8LL * (unsigned int)(v27 - 1));
    v13 = *(_DWORD *)(v26 + 68) == 1;
    *(_OWORD *)v65 = *(_OWORD *)(v26 + 52);
    if ( v13 )
    {
      v31 = (float)(int)CFloatFPU::CeilingSat(*(float *)v65 - 0.5);
      v30 = (float)(int)CFloatFPU::CeilingSat(*((float *)v65 + 1) - 0.5);
      v29 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v65[1] - 0.5);
      v51 = _mm_cvtsi32_si128(CFloatFPU::CeilingSat(*((float *)&v65[1] + 1) - 0.5));
      v25 = v71;
      LODWORD(v28) = _mm_cvtepi32_ps(v51).m128_u32[0];
    }
    else
    {
      v28 = *((float *)&v65[1] + 1);
      v29 = *(float *)&v65[1];
      v30 = *((float *)v65 + 1);
      v31 = *(float *)v65;
    }
    v77 = *v25;
    CMILMatrix::Transform2DBoundsHelper<0>(v60, (struct MilRectF *)&v77);
    if ( v29 > *(float *)&v74 && v28 > *((float *)&v74 + 1) && *((float *)&v74 + 2) > v31 && *((float *)&v74 + 3) > v30 )
    {
LABEL_25:
      if ( v69 != *(struct ID2D1Geometry **)(v23 + 56) )
      {
        if ( v59 )
        {
          v52 = CDrawingContext::PopLayer(v67);
          v11 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x119u, 0LL);
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v63);
            v12 = v64;
            goto LABEL_73;
          }
          v59 = 0;
          ReleaseInterface<ID2D1Geometry>(&v64);
        }
        v54 = *(struct ID2D1Geometry **)(v23 + 56);
        v69 = v54;
        if ( v54 )
        {
          CComplexShape::CComplexShape((CComplexShape *)v65, v54);
          D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)v65, v60, &v64);
          v11 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, D2DGeometry, 0x129u, 0LL);
LABEL_76:
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v66);
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v65[1]);
LABEL_44:
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v63);
            v12 = v64;
            goto LABEL_34;
          }
          v74 = 0LL;
          v75 = *(_OWORD *)(a1 + 64);
          CMILMatrix::Transform2DBoundsHelper<0>(v60, (struct MilRectF *)&v75);
          v57 = CDrawingContext::PushD2DLayer(v67, 0LL, (int)FLOAT_1_0, 0, 0);
          v11 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x12Fu, 0LL);
            goto LABEL_76;
          }
          v59 = 1;
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v66);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v65[1]);
        }
      }
      v32 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, CMILMatrix *))(*(_QWORD *)v23 + 56LL))(v23, v67, v60);
      v11 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x134u, 0LL);
        goto LABEL_44;
      }
    }
    v20 += 8LL;
  }
  if ( v14 )
  {
    CDrawingContext::PopGpuClipRectInternal(v14, 0);
    CDrawingContext::PopClippingScope(v14, 0);
  }
  v12 = v64;
LABEL_31:
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 62);
  *(_QWORD *)(a1 + 24) = v5;
LABEL_34:
  if ( v59 )
LABEL_73:
    CDrawingContext::PopLayer(v67);
LABEL_35:
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v12 + 16LL))(v12);
  return v11;
}
