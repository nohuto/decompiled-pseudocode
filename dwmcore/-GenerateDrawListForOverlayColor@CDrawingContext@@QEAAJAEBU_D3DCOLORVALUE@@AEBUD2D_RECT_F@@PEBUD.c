/*
 * XREFs of ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D2850
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3A90 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094614 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::GenerateDrawListForOverlayColor(
        CDrawingContext *this,
        const struct _D3DCOLORVALUE *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_MATRIX_3X2_F *a4,
        struct CDrawListEntryBuilder *a5)
{
  int v8; // esi
  int v9; // edi
  CMILMatrix *TopByReference; // rax
  CGeometryOnlyDrawListBrush *v11; // rcx
  int v12; // ebx
  CGeometryOnlyDrawListBrush *v13; // rax
  __int128 v14; // xmm0
  CGeometryOnlyDrawListBrush *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  int DrawList; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int128 v21; // xmm0
  int v22; // eax
  __int64 v23; // rcx
  CGeometryOnlyDrawListBrush *v25; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_SIZE_F v26; // [rsp+40h] [rbp-C8h] BYREF
  CGeometryOnlyDrawListBrush **v27; // [rsp+48h] [rbp-C0h]
  struct CGeometryOnlyDrawListBrush *v28; // [rsp+50h] [rbp-B8h] BYREF
  char v29; // [rsp+58h] [rbp-B0h]
  _QWORD v30[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+C4h] [rbp-44h]
  char v33; // [rsp+C8h] [rbp-40h]
  _BYTE v34[16]; // [rsp+D8h] [rbp-30h] BYREF
  int v35; // [rsp+E8h] [rbp-20h]
  __int128 v36; // [rsp+ECh] [rbp-1Ch]

  v26 = (struct D2D_SIZE_F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v34, this, &v26);
  v31 = 0;
  v32 = 257;
  *(_OWORD *)&v30[1] = 0LL;
  v8 = 50529027;
  v33 = 0;
  v9 = 0x2000;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
  if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
  {
    v8 = 0;
    v9 = 8224;
  }
  v25 = 0LL;
  v28 = 0LL;
  v29 = 1;
  v35 = v9 | 1;
  v27 = &v25;
  v36 = xmmword_180383930;
  v12 = CGeometryOnlyDrawListBrush::Create(&v28);
  if ( v29 )
  {
    v11 = *v27;
    *v27 = v28;
    if ( v11 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v11, 1);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v12, 0x19CFu, 0LL);
    if ( v25 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1);
  }
  else
  {
    v13 = v25;
    *((_BYTE *)v25 + 52) = 1;
    v14 = (__int128)*a3;
    *((_DWORD *)v13 + 12) = v8;
    *((_OWORD *)v13 + 2) = v14;
    v15 = v25;
    v25 = 0LL;
    v26 = (struct D2D_SIZE_F)v15;
    CBrushDrawListGenerator::AttachInput((__int64)v34, 0, (__int64 *)&v26);
    if ( v26 )
      std::default_delete<CDrawListBrush>::operator()(v16, *(__int64 (__fastcall ****)(_QWORD, __int64))&v26);
    if ( v25 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v34,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v30[1],
                 a5,
                 v17);
    v12 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DrawList, 0x19DBu, 0LL);
    }
    else if ( a2->a != 0.0 )
    {
      v21 = *(_OWORD *)&a2->r;
      v35 = v9;
      v36 = v21;
      v22 = CBrushDrawListGenerator::GenerateDrawList(
              (CBrushDrawListGenerator *)v34,
              (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v30[1],
              a5,
              v20);
      v12 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x19E4u, 0LL);
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v34);
  return (unsigned int)v12;
}
