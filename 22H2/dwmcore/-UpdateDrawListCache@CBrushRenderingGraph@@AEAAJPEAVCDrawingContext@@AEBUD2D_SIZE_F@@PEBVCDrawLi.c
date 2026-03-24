/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800C55A4
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001C808 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180056BE8 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18001EDEC (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x18001EEA0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180050134 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180051B20 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180051B68 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054E94 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180056430 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800577C0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180057AA8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180092A8C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180094C48 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x1800C59A4 (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct EffectStage *a5,
        struct CDrawListCache *a6)
{
  const struct D2D_SIZE_F *v8; // rdi
  int v10; // r15d
  unsigned int v11; // esi
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int DrawList; // eax
  __int64 v16; // rcx
  int v17; // ebx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 i; // rcx
  bool v22; // zf
  CSurfaceDrawListBrush *v23; // rcx
  unsigned int v24; // r8d
  CSurfaceDrawListBrush *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  CColorDrawListBrush *v28; // rcx
  unsigned int v29; // r8d
  CSurfaceDrawListBrush *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r8d
  CGeometryOnlyDrawListBrush *v33; // rcx
  unsigned int v34; // r8d
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CSurfaceDrawListBrush *v37; // rax
  __int128 v38; // xmm0
  unsigned int v39; // r8d
  unsigned int v40; // r8d
  unsigned int v41; // r8d
  CSurfaceDrawListBrush *v42[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v43; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v44; // [rsp+41h] [rbp-BFh]
  CSurfaceDrawListBrush *v45; // [rsp+50h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush **v46; // [rsp+58h] [rbp-A8h]
  struct CColorDrawListBrush *v47; // [rsp+60h] [rbp-A0h] BYREF
  char v48; // [rsp+68h] [rbp-98h]
  __int128 v49; // [rsp+70h] [rbp-90h]
  struct CRenderingTechnique *v50; // [rsp+80h] [rbp-80h]
  CDrawListCache *v51; // [rsp+88h] [rbp-78h]
  _QWORD v52[2]; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+A0h] [rbp-60h]
  __int16 v54; // [rsp+ECh] [rbp-14h]
  char v55; // [rsp+EEh] [rbp-12h]
  CSurfaceDrawListBrush **v56; // [rsp+F0h] [rbp-10h] BYREF
  CSurfaceDrawListBrush *v57; // [rsp+F8h] [rbp-8h] BYREF
  char v58; // [rsp+100h] [rbp+0h]
  _BYTE v59[16]; // [rsp+120h] [rbp+20h] BYREF
  int v60; // [rsp+130h] [rbp+30h]
  int v61; // [rsp+134h] [rbp+34h]
  int v62; // [rsp+138h] [rbp+38h]
  int v63; // [rsp+13Ch] [rbp+3Ch]
  int v64; // [rsp+140h] [rbp+40h]
  _QWORD v65[4]; // [rsp+148h] [rbp+48h]
  unsigned int v66; // [rsp+168h] [rbp+68h]
  char v67; // [rsp+16Ch] [rbp+6Ch]
  struct CDrawListEntry **v68[288]; // [rsp+170h] [rbp+70h] BYREF

  v51 = a6;
  v8 = a3;
  *(_QWORD *)&v49 = a3;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v68);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v59, a2);
  v10 = 0;
  v11 = 0;
  v50 = *(struct CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a5);
  if ( !*((_DWORD *)a5 + 1) )
  {
LABEL_12:
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v42[0] = 0LL;
    v64 = (int)FLOAT_1_0;
    v67 = 1;
    v60 = v10;
    if ( !a4 )
    {
      v47 = 0LL;
      v46 = v42;
      v48 = 1;
      v17 = CGeometryOnlyDrawListBrush::Create(&v47);
      if ( v48 )
      {
        v33 = *v46;
        *v46 = v47;
        if ( v33 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v33, 1, v34);
      }
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v33, 0LL, 0, v17, 0x48Cu, 0LL);
LABEL_50:
        if ( v42[0] )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v42[0], 1, v41);
        goto LABEL_17;
      }
      width = v8->width;
      height = v8->height;
      v37 = v42[0];
      *(_QWORD *)&v49 = 0LL;
      *((_QWORD *)&v49 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      v38 = v49;
      *((_BYTE *)v42[0] + 52) = 1;
      *((_DWORD *)v37 + 12) = 50529027;
      *((_OWORD *)v37 + 2) = v38;
      a4 = v42[0];
    }
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory((CBrushRenderingEffectFactory *)&v56, a2, v50, a5);
    v53 = 0;
    v52[1] = &v56;
    v54 = 1;
    v55 = 0;
    v52[0] = a4;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v59,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v52,
                 (struct CDrawListEntryBuilder *)v68);
    v17 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(v51, a2, v68);
      if ( v42[0] )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v42[0], 1, v18);
      v17 = 0;
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DrawList, 0x497u, 0LL);
    goto LABEL_50;
  }
  while ( 1 )
  {
    v12 = (char *)a5 + 128 * (unsigned __int64)v11;
    if ( !v12[76] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v12 + 11) + 8LL))(
             *((_QWORD *)v12 + 11),
             2LL) )
      {
        v13 = *((_QWORD *)v12 + 11);
        if ( *(_BYTE *)(v13 + 52) )
        {
          if ( *(_BYTE *)(v13 + 168) && *((_BYTE *)v50 + 44 * v11 + 78) )
            *(_BYTE *)(v13 + 52) = 0;
        }
      }
      v45 = (CSurfaceDrawListBrush *)*((_QWORD *)v12 + 11);
      CBrushDrawListGenerator::AttachInput((__int64)v59, v11, &v45);
      if ( v45 )
        std::default_delete<CShape>::operator()(v14, (__int64 (__fastcall ***)(_QWORD, __int64))v45);
      goto LABEL_10;
    }
    v42[0] = 0LL;
    if ( v12[77] )
      break;
    v57 = 0LL;
    v22 = v12[132] == 0;
    v56 = v42;
    v58 = 1;
    v43 = InterpolationMode::FromD2D1InterpolationMode(v22);
    v44 = 257;
    v17 = CSurfaceDrawListBrush::CreateWithTextureTransform(
            (struct CSurfaceDrawListBrush *)(v12 + 8),
            (__int16 *)&v43,
            (__int64)(v12 + 80),
            &v57);
    if ( v58 )
    {
      v24 = (unsigned int)v56;
      v23 = *v56;
      *v56 = v57;
      if ( v23 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v23, 1, v24);
    }
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, v17, 0x45Eu, 0LL);
      if ( v42[0] )
        CSurfaceDrawListBrush::`vector deleting destructor'(v42[0], 1, v39);
      goto LABEL_17;
    }
    v25 = v42[0];
    v42[0] = 0LL;
    v45 = v25;
    CBrushDrawListGenerator::AttachInput((__int64)v59, v11, &v45);
    if ( v45 )
      std::default_delete<CShape>::operator()(v26, (__int64 (__fastcall ***)(_QWORD, __int64))v45);
    if ( v42[0] )
      CSurfaceDrawListBrush::`vector deleting destructor'(v42[0], 1, v27);
LABEL_10:
    v10 |= *((_DWORD *)v12 + 18);
    if ( ++v11 >= *((_DWORD *)a5 + 1) )
    {
      v8 = (const struct D2D_SIZE_F *)v49;
      goto LABEL_12;
    }
  }
  v47 = 0LL;
  v46 = v42;
  v48 = 1;
  v17 = CColorDrawListBrush::Create((struct _D3DCOLORVALUE *)(v12 + 56), &v47);
  if ( v48 )
  {
    v28 = *v46;
    *v46 = v47;
    if ( v28 )
      CColorDrawListBrush::`vector deleting destructor'(v28, 1, v29);
  }
  if ( v17 >= 0 )
  {
    v30 = v42[0];
    v42[0] = 0LL;
    v45 = v30;
    CBrushDrawListGenerator::AttachInput((__int64)v59, v11, &v45);
    if ( v45 )
      std::default_delete<CShape>::operator()(v31, (__int64 (__fastcall ***)(_QWORD, __int64))v45);
    if ( v42[0] )
      CColorDrawListBrush::`vector deleting destructor'(v42[0], 1, v32);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, 0LL, 0, v17, 0x465u, 0LL);
  if ( v42[0] )
    CColorDrawListBrush::`vector deleting destructor'(v42[0], 1, v40);
LABEL_17:
  v19 = v66;
  for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a5 + 128 * (unsigned __int64)(unsigned int)i + 76) )
    {
      v65[i] = 0LL;
      v19 = v66;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v59);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v68);
  return (unsigned int)v17;
}
