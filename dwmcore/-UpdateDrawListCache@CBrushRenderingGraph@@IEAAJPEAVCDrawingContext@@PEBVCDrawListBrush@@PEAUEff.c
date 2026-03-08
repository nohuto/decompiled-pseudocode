/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18002FD34
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800FB294 (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180018B14 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180018BC0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x180030050 (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800300A0 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007CF6C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800946C0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180095C98 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct CDrawListBrush *a3,
        struct EffectStage *a4,
        unsigned int a5,
        struct CDrawListCache *a6)
{
  CDrawListCache *v6; // rdi
  struct CDrawingContext *v10; // rdx
  unsigned int v11; // esi
  struct CRenderingTechnique *v13; // r13
  char *v14; // rdi
  CSurfaceDrawListBrush *v15; // rcx
  int v16; // ebx
  struct CDrawingContext *v17; // rax
  __int64 v18; // rcx
  int DrawList; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  __int64 i; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  CColorDrawListBrush *v26; // rcx
  struct CDrawingContext *v27; // rax
  __int64 v28; // rcx
  CSurfaceDrawListBrush *v29; // [rsp+30h] [rbp-D0h] BYREF
  struct CDrawingContext *v30; // [rsp+38h] [rbp-C8h] BYREF
  CSurfaceDrawListBrush **v31; // [rsp+40h] [rbp-C0h]
  struct CSurfaceDrawListBrush *v32; // [rsp+48h] [rbp-B8h] BYREF
  char v33; // [rsp+50h] [rbp-B0h]
  struct CDrawListCache *v34; // [rsp+58h] [rbp-A8h]
  const struct CDrawListBrush *v35; // [rsp+60h] [rbp-A0h]
  _QWORD v36[2]; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+CCh] [rbp-34h]
  char v39; // [rsp+D0h] [rbp-30h]
  CSurfaceDrawListBrush **v40; // [rsp+E0h] [rbp-20h] BYREF
  struct CColorDrawListBrush *v41; // [rsp+E8h] [rbp-18h] BYREF
  char v42; // [rsp+F0h] [rbp-10h]
  _BYTE v43[16]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+114h] [rbp+14h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]
  int v48; // [rsp+120h] [rbp+20h]
  _QWORD v49[4]; // [rsp+128h] [rbp+28h]
  unsigned int v50; // [rsp+148h] [rbp+48h]
  _BYTE v51[4480]; // [rsp+150h] [rbp+50h] BYREF

  v6 = a6;
  v34 = a6;
  v35 = a3;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v51);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v43, a2);
  v10 = (struct CDrawingContext *)*(unsigned int *)a4;
  v11 = 0;
  v13 = *(struct CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * (_QWORD)v10);
  if ( !*((_DWORD *)a4 + 1) )
  {
LABEL_15:
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = (int)FLOAT_1_0;
    v44 = a5;
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory((CBrushRenderingEffectFactory *)&v40, v10, v13, a4);
    v37 = 0;
    v36[0] = v35;
    v38 = 257;
    v36[1] = &v40;
    v39 = 1;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v43,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v36,
                 (struct CDrawListEntryBuilder *)v51);
    v16 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, DrawList, 0x3FEu, 0LL);
    }
    else
    {
      CDrawListCache::Update(v6, a2, (struct CDrawListEntryBuilder *)v51);
      v16 = 0;
    }
    goto LABEL_17;
  }
  while ( 1 )
  {
    v14 = (char *)a4 + 104 * v11;
    if ( !v14[52] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v14 + 8) + 8LL))(
             *((_QWORD *)v14 + 8),
             2LL) )
      {
        v24 = *((_QWORD *)v14 + 8);
        if ( *(_BYTE *)(v24 + 52) )
        {
          if ( *((_BYTE *)v13 + 44 * v11 + 94) )
            *(_BYTE *)(v24 + 52) = 0;
        }
      }
      v30 = (struct CDrawingContext *)*((_QWORD *)v14 + 8);
      CBrushDrawListGenerator::AttachInput(v43, v11, &v30);
      v10 = v30;
      if ( v30 )
        std::default_delete<CDrawListBrush>::operator()(v25, v30);
      goto LABEL_13;
    }
    v29 = 0LL;
    if ( v14[53] )
      break;
    v32 = 0LL;
    v31 = &v29;
    v33 = 1;
    v16 = CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
            v13,
            v11,
            (const struct EffectInput *)(v14 + 8),
            &v32);
    if ( v33 )
    {
      v15 = *v31;
      *v31 = v32;
      if ( v15 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1u);
    }
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, v16, 0x3C3u, 0LL);
      if ( v29 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1u);
      goto LABEL_17;
    }
    v17 = v29;
    v29 = 0LL;
    v30 = v17;
    CBrushDrawListGenerator::AttachInput(v43, v11, &v30);
    v10 = v30;
    if ( v30 )
      std::default_delete<CDrawListBrush>::operator()(v18, v30);
    if ( *((_QWORD *)a2 + 26) && (v14[109] || v14[111]) )
      a5 |= 0x100u;
    if ( v29 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1u);
LABEL_13:
    a5 |= *((_DWORD *)v14 + 12);
    if ( ++v11 >= *((_DWORD *)a4 + 1) )
    {
      v6 = v34;
      goto LABEL_15;
    }
  }
  v41 = 0LL;
  v40 = &v29;
  v42 = 1;
  v16 = CColorDrawListBrush::Create((struct _D3DCOLORVALUE *)v14 + 2, &v41);
  if ( v42 )
  {
    v26 = *v40;
    *v40 = v41;
    if ( v26 )
      CColorDrawListBrush::`vector deleting destructor'(v26, 1);
  }
  if ( v16 >= 0 )
  {
    v27 = v29;
    v29 = 0LL;
    v30 = v27;
    CBrushDrawListGenerator::AttachInput(v43, v11, &v30);
    v10 = v30;
    if ( v30 )
      std::default_delete<CDrawListBrush>::operator()(v28, v30);
    if ( v29 )
      CColorDrawListBrush::`vector deleting destructor'(v29, 1);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v16, 0x3D4u, 0LL);
  if ( v29 )
    CColorDrawListBrush::`vector deleting destructor'(v29, 1);
LABEL_17:
  v21 = v50;
  for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a4 + 104 * (unsigned int)i + 52) )
    {
      v49[i] = 0LL;
      v21 = v50;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v43);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v51);
  return (unsigned int)v16;
}
